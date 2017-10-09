#include <fstream>
#include <sstream>
#include "LibraryFileMutator.h"

char LibraryFileMutator::fieldSeparatorSymbol = ';';

Library *LibraryFileMutator::load(std::string fileName) {
    std::ifstream file;
    file.open(fileName);

    Library *library = new Library;
    std::getline(file, library->name);
    std::getline(file, library->owner);

    std::string line;
    while (std::getline(file, line)) {
        library->books->push_back(formattedStringToBook(line));
    }

    file.close();
    return library;
}

void LibraryFileMutator::save(Library *library, std::string fileName) {
    std::ofstream file;
    file.open(fileName, std::fstream::out | std::ofstream::trunc);

    file << library->name << std::endl;
    file << library->owner << std::endl;

    for (auto &book: *library->books) {
        file << bookToFormattedString(book) << std::endl;
    }

    file.close();
}

Book *LibraryFileMutator::formattedStringToBook(std::string line) {
    std::stringstream lineStream(line);
    Book *book = new Book;
    std::getline(lineStream, book->author, fieldSeparatorSymbol);
    std::getline(lineStream, book->title, fieldSeparatorSymbol);
    std::getline(lineStream, book->publisher, fieldSeparatorSymbol);
    std::getline(lineStream, book->year, fieldSeparatorSymbol);
    std::getline(lineStream, book->storePlace, fieldSeparatorSymbol);
    return book;
}

std::string LibraryFileMutator::bookToFormattedString(Book *book) {
    std::stringstream lineStream;
    lineStream << book->author << fieldSeparatorSymbol;
    lineStream << book->title << fieldSeparatorSymbol;
    lineStream << book->publisher << fieldSeparatorSymbol;
    lineStream << book->year << fieldSeparatorSymbol;
    lineStream << book->storePlace << fieldSeparatorSymbol;
    return lineStream.str();
}