#include "base64.h"
#include <iostream>

constexpr auto NEWLINE = "\n";

int main() {
  std::string input_string;

  for(std::string line; std::getline(std::cin, line);){
    input_string.append(line);
        input_string.append(NEWLINE);
  }

  const std::string newLine = NEWLINE;

  input_string.erase(input_string.length()-newLine.length(), input_string.length());

  const auto encoded = base64_encode(reinterpret_cast<const unsigned char*>(input_string.c_str()), input_string.length());

  std::cout << encoded << std::endl;
  return 0;
}
