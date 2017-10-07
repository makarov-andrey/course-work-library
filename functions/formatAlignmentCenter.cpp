#include <string>
#include "functions.h"

std::string formatAlignmentCenter (std::string input, int size) {
    int indent = size - input.size();
    if (indent <= 0) {
        return formatAlignmentLeft(input, size);
    }
    int leftIndent = indent / 2;
    std::string output = formatAlignmentRight(input, leftIndent + input.size());
    return formatAlignmentLeft(output, size);
}
