#include <iostream>
#include <string>

int main()
{
	char in_char('\0');
	std::string out_msg;
	std::cout << "Enter text to be encrypted." << std::endl;
	while(std::cin >> in_char)
	{
		if (in_char == '\n') {continue;} //contiue if return
//		else if (in_char == ' ') {out_msg += ' '; continue;} //detect space; preserved for legibility
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
		else {continue;} //if not alphanumneric or space, just continue taking input until CTRL+d
	}
	std::cout << out_msg << std::endl;
	return 0;
}
