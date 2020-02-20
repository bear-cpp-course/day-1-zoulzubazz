#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "TransformChar.hpp"
#include "processCommandline.hpp"
//#include "runCeaserCipher.hpp"

int main(int argc, char* argv[])
{
  std::vector<std::string> cmdargs{argv, argv+argc};
  bool helpRequested(0), versionRequested(0), parserOut(0);
  int key;
  std::string inputFileName, outputFileName, operation;
  parserOut = processCommandLine(cmdargs, helpRequested, versionRequested, inputFileName, outputFileName, key, operation);
  if (parserOut == 0){return 0;} //error when parsing
  //std::ifstream in_file{inputFileName};
  //std::ofstream out_file{outputFileName};
  std::cout << "hey" << std::endl;
  std::cout << "Enter text to be encrypted." << std::endl;
  std::string out_msg("");
  char in_char{'\0'};
  while (std::cin >> in_char){
    out_msg += transformChar(in_char);
  }
  std::cout << '\n'+out_msg << std::endl;
  return 0;
}



//			std::string helptxt{"This program uses obeselete ciphers to encrypt your text"};
//			std::cout << helptxt << std::endl;
//			return 0;


//			std::cout << "Version 0.0.1" << std::endl;
//			return 0;


//		else {continue;} //if not alphanumneric or space, just continue taking input until CTRL+d
