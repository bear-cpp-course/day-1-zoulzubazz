
#include <iostream> 
#include <fstream> 
#include <string> 
#include <vector> 
#include "TransformChar.hpp" 
#include "processCommandline.hpp"
#include "runCeaserCipher.hpp"
#include "CipherMode.hpp"

int main(int argc, char* argv[])
{
  std::vector<std::string> cmdargs{argv, argv+argc};
  ProcessCmdArgs ProcessCmdLn;
  ProcessCmdArgs::programSettings psets;
  std::string trans_msg(""), out_txt("");
  psets = ProcessCmdLn.processCommandLine(cmdargs);
  if (psets.helpRequested == true){std::cout<< "Here is some help"<<std::endl; return 0;} 
  if (psets.versionRequested == true){std::cout<< "Version 0.0.1"<<std::endl; return 0;}
  if (psets.inputError == true){std::cout<< "Error in input."<<std::endl; return 0;}
  if (psets.inputFileName == ""){
    std::cout << "Enter text to be encrypted." << std::endl;
    char in_char{'\0'};
    while (std::cin >> in_char){trans_msg += transformChar(in_char);}
    std::cout<< psets.key << std::endl;
    CeaserCipher CeaCip(psets.key);
    out_txt =  CeaCip.applyCipher(trans_msg, psets.cMode);
    std::cout << '\n'+out_txt << std::endl;
    return 1;
  }
  if (psets.inputFileName != ""){
    std::ifstream in_file{psets.inputFileName};
    if(in_file.good() != true){std::cout<< "Error in input file."<<std::endl; return 0;}
    std::cout << "Reading from input file.\n" << std::endl;
    char in_char{'\0'};
    while (in_file >> in_char){trans_msg += transformChar(in_char);}
    in_file.close();
    std::cout<< "Key is " + std::to_string(psets.key) << std::endl;
    CeaserCipher CeaCip(psets.key);
    out_txt =  CeaCip.applyCipher(trans_msg, psets.cMode);
    if (psets.outputFileName == ""){      
      std::cout << '\n'+out_txt << std::endl;
      return 1;
    }
    if(psets.outputFileName != ""){
      std::ofstream out_file{psets.outputFileName};      
      if(out_file.good() != true){std::cout << "Error in output file." << std::endl; return 0;}
      out_file << out_txt << std::endl; 
      out_file.close();
      return 1;
    }
  }
    return 0;
}
