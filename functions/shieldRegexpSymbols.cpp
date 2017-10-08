#include <string>
#include <regex>

std::string shieldRegexSymbols(std::string input) {
    return std::regex_replace(input, std::regex("([{}()\\[\\]^$?+.*\\\\])"), "\\$1");
}
