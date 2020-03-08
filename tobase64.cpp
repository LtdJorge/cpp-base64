#include "base64.h"
#include <iostream>

int main() {
  std::string input_string;

  for(std::string line; std::getline(std::cin, line);){
    input_string.append(line);
  }
	
  const auto encoded = base64_encode(reinterpret_cast<const unsigned char*>(input_string.c_str()), input_string.length());

  std::cout << encoded << std::endl;
  return 0;
}
