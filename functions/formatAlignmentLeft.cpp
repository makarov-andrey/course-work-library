#include <string>

std::string formatAlignmentLeft (std::string input, int size) {
    input.resize(size, ' ');
    return input;
}
