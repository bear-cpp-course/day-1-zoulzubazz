#include "processCommandline.hpp"

bool processCommandLine(const std::vector<std::string>& args,
			bool& helpRequested, bool& versionRequested,
			std::string& inputFileName, std::string& outputFileName,
			int& key, std::string& operation)
{
	for (size_t i{0}; i < args.size(); i++)
	{
		if (args[i] == "-h" || args[i] == "--help") { std::cout << "No Help!" << std::endl; helpRequested = 1; return 1; } //print help text
		if (args[i] == "-v" || args[i] == "--version") { versionRequested = 1; return 1; } // print version information
		if (args[i] == "-i")
		{
			i+=1;
			if (i > args.size()-1){ std::cout << "No input file name specified.!!" << std::endl; return 1;}
			else inputFileName = args[i];
		}
		if (args[i] == "-o")
		{
			i+=1;
			if (i > args.size()-1){ std::cout << "No output file name specified.!!" << std::endl; return 1;}
			else outputFileName = args[i];
		}
		if (args[i] == "-k")
		{
      i+=1;
      if (i > args.size()-1){ std::cout << "No key provided.!!" << std::endl; return 0;}
			else if (isdigit(args[i][0])){ std::cout << "Not a valid key, please provide a number as key.!!" << std::endl; return 0;}
      else  key = std::stoi(args[i]);
		}
    if (args[i] == "encrypt" || args[i] == "decrypt")
    {
    	operation = args[i];
			return 1;
    }
		//else {helpRequested = 1; return 0;}
	}
return 1;
}
