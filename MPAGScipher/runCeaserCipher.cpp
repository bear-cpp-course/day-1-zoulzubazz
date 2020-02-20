#include "runCeaserCipher.hpp"

std::string ceaserCipher(const std::std::string& text, const int& key)
{
  std::string out_text("");
  for (const char &c : text){
    if (c + key > 90){ out_text += 65 + (c + key - 90) }
    else {out_text += c + key}
  }
return out_text;
}
