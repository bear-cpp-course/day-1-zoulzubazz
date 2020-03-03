#ifndef MPAGSCIPHER_CEASERCIPHER_HPP
#define MPAGSCIPHER_CEASERCIPHER_HPP

#include <string>
#include "CipherMode.hpp"
/** A broken implimentation of the Ceaser cipher and associated members
*/
class CeaserCipher{
  public:
      explicit  CeaserCipher(const int&);
  /** Conctructer which accepts the key to the
   *  cipher as an integer
   */     
      explicit CeaserCipher(const std::string&);
  /** Conctructer which accepts the key to the
   *  cipher as an std::string
   */
      std::string applyCipher(const std::string&, const CipherMode&);
   /** Conctructer which accepts the key to the
   *   cipher as an integer
   */
     private:
	int key_;
};

#endif
