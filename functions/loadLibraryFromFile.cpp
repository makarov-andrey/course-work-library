#include <iostream>
#include <fstream>
#include "functions.h"
#include "../structures/Library.h"
#include "../structures/Book.h"

Library *loadLibraryFromFile(std::string fileName) {
    std::ifstream file;
    file.open(fileName);

    Library *library = new Library;
    std::getline(file, library->name);
    std::getline(file, library->owner);

    std::string line;
    while (std::getline(file, line)) {
        library->books.push_back(*createBookFromString(line));
    }

    file.close();
    return library;
}
