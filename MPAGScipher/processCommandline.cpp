#include "processCommandline.hpp"

ProcessCmdArgs::programSettings ProcessCmdArgs::processCommandLine(const std::vector<std::string>& args)
{
  ProcessCmdArgs::programSettings psets_;
  for (size_t i{0}; i < args.size(); i++)
	  {
	    if (args[i] == "-h" || args[i] == "--help") { std::cout << "No Help!" << std::endl; psets_.helpRequested = true; } //print help text
		if (args[i] == "-v" || args[i] == "--version") { psets_.versionRequested = true;} // print version information
		if (args[i] == "-i")
		{
			i+=1;
			if (i > args.size()-1){ std::cout << "No input file name specified.!!" << std::endl; psets_.inputError = true;}
			else psets_.inputFileName = args[i];
		}
		if (args[i] == "-o")
		{
			i+=1;
			if (i > args.size()-1){ std::cout << "No output file name specified.!!" << std::endl; psets_.inputError = true;}
			else psets_.outputFileName = args[i];
		}
		if (args[i] == "-k")
		{
      			i+=1;
      			if (i > args.size()-1){ std::cout << "No key provided.!!" << std::endl; psets_.inputError = true;}
      			else psets_.key = std::stoi(args[i]);
		}
   		if (args[i] == "--encrypt" || args[i] == "--decrypt")
   		 {
		   psets_.cMode = (args[i] == "encrypt") ? CipherMode::encrypt : CipherMode::decrypt;
    		 }
		//else {helpRequested = 1; return 0;}
	  }
return psets_;
}
