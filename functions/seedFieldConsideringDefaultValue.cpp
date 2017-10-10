#include <iostream>

void seedFieldConsideringDefaultValue (std::string title, std::string &field) {
    std::cout << title;
    if (!field.empty()) {
        std::cout << " (" << field << ")";
    }
    std::cout << ": ";
    std::string input;
    std::getline(std::cin, input);
    if (!input.empty()) {
        field = input;
    }
}
