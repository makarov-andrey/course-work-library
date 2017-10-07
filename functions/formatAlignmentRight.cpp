#include <string>

std::string formatAlignmentRight (std::string input, int size) {
    int whiteSpaces = size - input.size();
    if (whiteSpaces < 0) {
        input.resize(size);
        return input;
    }
    return std::string(whiteSpaces, ' ') + input;
}
