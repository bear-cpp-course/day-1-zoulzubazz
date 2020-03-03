
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
  //std::ifstream in_file{inputFileName};
  //std::ofstream out_file{outputFileName};
  std::cout << "Enter text to be encrypted." << std::endl;

  char in_char{'\0'};
  while (std::cin >> in_char){
    trans_msg += transformChar(in_char);
  }
  std::cout<< psets.key << std::endl;
  CeaserCipher CeaCip(psets.key);
  out_txt =  CeaCip.applyCipher(trans_msg, psets.cMode);
  std::cout << '\n'+out_txt << std::endl;
  return 0;
}


