#include "processCommandline.hpp"

bool processCommandLine(const std::vector<std::string>& args,
			programSettings& psets)
{
	for (size_t i{0}; i < args.size(); i++)
	  {
		if (args[i] == "-h" || args[i] == "--help") { std::cout << "No Help!" << std::endl; psets.helpRequested = true; return 1; } //print help text
		if (args[i] == "-v" || args[i] == "--version") { psets.versionRequested = true; return 1; } // print version information
		if (args[i] == "-i")
		{
			i+=1;
			if (i > args.size()-1){ std::cout << "No input file name specified.!!" << std::endl; return 1;}
			else psets.inputFileName = args[i];
		}
		if (args[i] == "-o")
		{
			i+=1;
			if (i > args.size()-1){ std::cout << "No output file name specified.!!" << std::endl; return 1;}
			else psets.outputFileName = args[i];
		}
		if (args[i] == "-k")
		{
      			i+=1;
      			if (i > args.size()-1){ std::cout << "No key provided.!!" << std::endl; return 0;}
      			else psets.key = std::stoi(args[i]);
		}
    if (args[i] == "encrypt" || args[i] == "decrypt")
    {	     
      psets.operation = (args[i] == "encrypt") ? "encrypt" : "decrypt";
	return 1;
    }
		//else {helpRequested = 1; return 0;}
	  }
return 1;
}
