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
  programSettings psets;
  bool parserOut(0);
  std::string out_msg(""), out_txt("");
  parserOut = processCommandLine(cmdargs, psets);
  if (parserOut == 0){std::cout<< "Error Exiting"<<std::endl; return 0;} //error when parsing
  //std::ifstream in_file{inputFileName};
  //std::ofstream out_file{outputFileName};
  std::cout << "Enter text to be encrypted." << std::endl;
  char in_char{'\0'};
  while (std::cin >> in_char){
    out_msg += transformChar(in_char);
  }
  std::cout<< psets.key << std::endl;
  CeaserCipher::CeaserCipher(key)
  CeaserCipher::
  out_txt =  ceaserCipher(out_msg, psets.key);
  std::cout << '\n'+out_txt << std::endl;
  return 0;
}



//			std::string helptxt{"This program uses obeselete ciphers to encrypt your text"};
//			std::cout << helptxt << std::endl;
//			return 0;


//			std::cout << "Version 0.0.1" << std::endl;
//			return 0;


//		else {continue;} //if not alphanumneric or space, just continue taking input until CTRL+d
