

add_library(MPAGScipher STATIC
  CipherMode.hpp
  processCommandline.cpp
  processCommandline.hpp
  runCeaserCipher.cpp
  runCeaserCipher.hpp
  TransformChar.cpp
  TransformChar.hpp
)

target_include_directories(MPAGScipher
  PUBLIC ${CMAKE_CURRENT_LIST_DIR}
  )

target_compile_features(MPAGScipher
  PUBLIC cxx_auto_type cxx_range_for cxx_uniform_initialization
  )
