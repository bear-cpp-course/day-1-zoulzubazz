#include "TransformChar.hpp"

std::string transformChar(const char in_char)
{
  std::string out_char("");
//if (in_char == '\n') {std::cout << "here" << std::endl; continue;} //contiue if return
  if (isspace(in_char)) {out_char = ' ';} //detect space; preserved for legibility
  else if (isalnum(in_char)) //alphanumeric check
  {
    if ((int) in_char >= 48 && (int) in_char <= 57) //digit check
    {
      switch (in_char)
      {
        case '0':
        out_char += "ZERO"; break;
        case '1':
        out_char += "ONE"; break;
        case '2':
        out_char += "TWO"; break;
        case '3':
        out_char += "THREE"; break;
        case '4':
        out_char += "FOUR"; break;
        case '5':
        out_char += "FIVE"; break;
        case '6':
        out_char += "SIX"; break;
        case '7':
        out_char += "SEVEN"; break;
        case '8':
        out_char += "EIGHT"; break;
        case '9':
        out_char += "NINE"; break;
      }
    }
    else {out_char = toupper(in_char);} // convert to upper and append to string
  }
return out_char;
}
