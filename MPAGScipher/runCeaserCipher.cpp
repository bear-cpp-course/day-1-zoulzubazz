#include "runCeaserCipher.hpp"

CeaserCipher::CeaserCipher(int k) : key_ {k};

CeaserCipher::CeaserCipher(std::string& k){key_ = std::stoi(k)}

std::string CeaserCpher::appyCipher(const std::strin&, const bool enordec){
  int kk(key);
  if (key > 26){kk = key%26;}
  std::string out_text("");
  for (const char &c : text){
    if (c + kk > 90){ out_text += 65 + (c + kk - 91); }
    else {out_text += c + kk;}
  }
return out_text;

}
