#ifndef MPAGSCIPHER_CEASERCIPHER_HPP
#define MPAGSCIPHER_CEASERCIPHER_HPP

#include <string>

/** A broken implimentation of the Ceaser cipher and associated members
*/

class CeaserCipher{
  public:
      explicit  CeaserCipher(int key);
  /** Conctructer which accepts the key to the
   *  cipher as an integer
   */     
      explicit CeaserCipher(std::string& key)
  /** Conctructer which accepts the key to the
   *  cipher as an std::string
   */
      std::string applyCipher(const std::string&, const bool enordec)
   /** Conctructer which accepts the key to the
   *   cipher as an integer
   */
     private:
	int key_;

  };

//std::string ceaserCipher(std::string text,const int& key);

#endif
