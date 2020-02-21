#include "runCeaserCipher.hpp"

std::string ceaserCipher(std::string text, const int& key)
{
  int kk(key);
  if (key > 26){kk = key%26;}
  std::string out_text("");
  for (const char &c : text){
    if (c + kk > 90){ out_text += 65 + (c + kk - 91); }
    else {out_text += c + kk;}
  }
return out_text;
}
