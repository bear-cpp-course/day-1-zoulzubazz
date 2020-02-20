#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <cctype>
#include <vector>
#include <iostream>
//Processes command line arguments

bool processCommandLine(const std::vector<std::string>& args,
			bool& helpRequested, bool& versionRequested,
			std::string& inputFileName, std::string& outputFileName, int& key,
			std::string& operation);

#endif
