#include <iostream>
#include <string>
#include <vector>
#include "TransformChar.hpp"

bool processCommandLine(const std::vector<std::string>& args,
			bool& helpRequested, bool& versionRequested,
			std::string& inputFileName, std::string& outputFileName)
{
	for (size_t i{0}; i < args.size(); i++)
	{
		if (args[i] == "-h" || args[i] == "--help")
		{
			helpRequested = 1; return 1;
		}
		if (args[i] == "-v" || args[i] == "--version")
		{
			versionRequested = 1; return 1;
		}
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

int main(int argc, char* argv[])
{
	std::vector<std::string> cmdargs{argv, argv+argc};
	bool helpRequested(-1), versionRequested(-1);
	std::string inputFileName, outputFileName;
	bool parserOut;
	parserOut = processCommandLine(cmdargs, helpRequested, versionRequested, inputFileName, outputFileName);
	if (parserOut == 0)
	{
		return 0;
	}
	else
	{
		std::cout << inputFileName << outputFileName << std::endl;
	}
	char in_char;
	std::string out_msg;
	std::cout << "Enter text to be encrypted." << std::endl;

	std::cout << '\n'+out_msg << std::endl;
	return 0;
}

std::string transformChar(const char in)
{
	while(std::cin >> in_char)
	{
//		if (in_char == '\n') {std::cout << "here" << std::endl; continue;} //contiue if return
		if (isspace(in_char)) {out_msg += ' ';} //detect space; preserved for legibility
		else if (isalnum(in_char)) //alphanumeric check
		{ 
		  if ((int) in_char >= 48 && (int) in_char <= 57) //digit check
		  {
		    switch (in_char)
		    {
		      case '0':
		      out_msg += "ZERO"; break;
		      case '1':
		      out_msg += "ONE"; break;
		      case '2':
		      out_msg += "TWO"; break;
		      case '3':
		      out_msg += "THREE"; break;
		      case '4':
		      out_msg += "FOUR"; break;
		      case '5':
		      out_msg += "FIVE"; break;
		      case '6':
		      out_msg += "SIX"; break;
		      case '7':
		      out_msg += "SEVEN"; break;
		      case '8':
		      out_msg += "EIGHT"; break;
		      case '9':
		      out_msg += "NINE"; break;
		    }
		  }
		  else {out_msg += toupper(in_char);} // convert to upper and append to string
		}
	}
}


//			std::string helptxt{"This program uses obeselete ciphers to encrypt your text"};
//			std::cout << helptxt << std::endl;
//			return 0;


//			std::cout << "Version 0.0.1" << std::endl;
//			return 0;


//		else {continue;} //if not alphanumneric or space, just continue taking input until CTRL+d
