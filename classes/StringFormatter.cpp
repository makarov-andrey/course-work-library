#include "StringFormatter.h"

std::string StringFormatter::formatAlignmentCenter (std::string input, int size) {
    int indent = size - input.size();
    if (indent <= 0) {
        return StringFormatter::formatAlignmentLeft(input, size);
    }
    int leftIndent = indent / 2;
    std::string output = formatAlignmentRight(input, leftIndent + input.size());
    return StringFormatter::formatAlignmentLeft(output, size);
}

std::string StringFormatter::formatAlignmentLeft (std::string input, int size) {
    input.resize(size, ' ');
    return input;
}

std::string StringFormatter::formatAlignmentRight (std::string input, int size) {
    int whiteSpacesLength = size - input.size();
    if (whiteSpacesLength < 0) {
        input.resize(size);
        return input;
    }
    return std::string(whiteSpacesLength, ' ') + input;
}