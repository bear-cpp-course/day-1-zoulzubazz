#include "processCommandline.hpp"

bool processCommandLine(const std::vector<std::string>& args,
			bool& helpRequested, bool& versionRequested,
			std::string& inputFileName, std::string& outputFileName)
{
	for (size_t i{0}; i < args.size(); i++)
	{
		if (args[i] == "-h" || args[i] == "--help") { helpRequested = 1; return 1; } //print help text
		if (args[i] == "-v" || args[i] == "--version") { versionRequested = 1; return 1; } // print version information
		if (args[i] == "-i")
		{
			i+=1;
			if (i > args.size()-1){ std::cout << "No input file name specified.!!" << std::endl; return 0;}
			else inputFileName = args[i];
		}
		if (args[i] == "-o")
		{
			i+=1;
			if (i > args.size()-1){ std::cout << "No output file name specified.!!" << std::endl; return 0;}
			else outputFileName = args[i];
		}
	}
return 1;
}
