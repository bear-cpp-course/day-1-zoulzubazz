#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <cctype>
#include <vector>
#include <iostream>
#include "CipherMode.hpp"

/** Processes command line arguments input to the Ceaser cipher */

class ProcessCmdArgs{
  public:
    struct programSettings {
      bool helpRequested = false;
      bool versionRequested = false;
      bool inputError = false;
      int key = 0;
      std::string inputFileName = "";
      std::string outputFileName = "";
      CipherMode cMode {CipherMode::encrypt};
    };
  /*struct ProcessCmdArgs:: */
programSettings processCommandLine(const std::vector<std::string>& args);
};



#endif
