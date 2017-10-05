#include <string>

std::string formatAlignmentRight (std::string input, int size) {
    std::string output;
    sprintf(output, "%" + std::to_string(size) + "." + std::to_string(size) + "s", input);
    return output;
}
