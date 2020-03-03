#include "runCeaserCipher.hpp"
//#include "CipherMode.hpp"

CeaserCipher::CeaserCipher(const int& k) : key_(k){}

CeaserCipher::CeaserCipher(const std::string& k) : key_(std::stoi(k)){}

std::string CeaserCipher::applyCipher(const std::string& trans_msg, const CipherMode& cMode){
  int kk(key_);
  if (key_ > 26){kk = key_%26;}
  std::string out_text("");
  switch(cMode){
  case CipherMode::encrypt:{
    for (const char &c : trans_msg){
      if (c + kk > 90){ out_text += 65 + kk - (91 - c); }
      else {out_text += c + kk;}
    }
    break;
  }
  case CipherMode::decrypt:{
    for (const char &c : trans_msg){
      if (c - kk < 65){ out_text += 91 -(65 - (c - kk)); }
      else {out_text += c - kk;}
	}  
  }
    break;
  }
  return out_text;
}
