#ifndef COURSE_WORK_LIBRARYFILEMUTATOR_H
#define COURSE_WORK_LIBRARYFILEMUTATOR_H

#include <string>
#include "../models/Library.h"
#include "../models/Book.h"

class LibraryFileMutator {
public:
    static char fieldSeparatorSymbol;
    LibraryFileMutator();
    static Library *load(std::string fileName);
    static void save(Library *library, std::string fileName);
    static Book *formattedStringToBook(std::string line);
    static std::string bookToFormattedString(Book *book);
};


#endif //COURSE_WORK_LIBRARYFILEMUTATOR_H
