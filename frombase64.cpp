#include "base64.h"
#include <iostream>

int main() {
    std::string input_string;

    for (std::string line; std::getline(std::cin, line);) {
        input_string.append(line);
    }

    const auto decoded = base64_decode(input_string);

    std::cout << decoded << std::endl;
    return 0;
}
