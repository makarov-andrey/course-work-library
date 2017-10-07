#include <iostream>
#include "LibraryDrawer.h"
#include "../../../structures/Library.h"

void LibraryDrawer::setLibrary(Library *library) {
    this->library = library;
}

void LibraryDrawer::render() {
    std::cout << "Название библиотеки: " << library->name << std::endl;
    std::cout << "Владелец библиотеки: " << library->owner << std::endl;
    std::cout << "Книги:" << std::endl;
    BookTableDrawer *booksDrawer = new BookTableDrawer();
    booksDrawer->setBody(library->books);
    booksDrawer->recountCellSizes();
    booksDrawer->render();
    delete booksDrawer;
}