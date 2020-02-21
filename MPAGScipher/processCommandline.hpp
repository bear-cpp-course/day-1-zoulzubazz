#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <cctype>
#include <vector>
#include <iostream>
//Processes command line arguments

struct programSettings{
  bool helpRequested;
  bool versionRequested;
  int key;
  std::string inputFileName;
  std::string outputFileName;
  bool operation;
};


bool processCommandLine(const std::vector<std::string>&, programSettings&);

#endif
