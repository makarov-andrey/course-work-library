#include <iostream>
#include <string>

std::string askUntil(bool (*validator)(std::string), std::string errorMessage = "") {
    std::string input;
    getline(std::cin, input);
    while (!validator(input)) {
        if (!errorMessage.empty()) {
            std::cout << errorMessage << std::endl;
        }
        getline(std::cin, input);
    }
    return input;
}
