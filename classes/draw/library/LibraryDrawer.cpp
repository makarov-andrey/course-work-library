#include <iostream>
#include "LibraryDrawer.h"
#include "../../models/Library.h"

LibraryDrawer::LibraryDrawer() {
    headingColor = COLOR_LIGHT_GREEN;
}

void LibraryDrawer::setLibrary(Library *library) {
    this->library = library;
}

void LibraryDrawer::render() {
    renderName();
    renderOwner();
    renderBooks();
    std::cout << std::endl;
}

void LibraryDrawer::renderName() {
    CommandLineInterface::setColor(headingColor);
    std::cout << "Название библиотеки: ";
    CommandLineInterface::setColor();
    std::cout << library->name << std::endl;
}

void LibraryDrawer::renderOwner() {
    CommandLineInterface::setColor(headingColor);
    std::cout << "Владелец библиотеки: ";
    CommandLineInterface::setColor();
    std::cout << library->owner << std::endl;
}

void LibraryDrawer::renderBooks() {
    CommandLineInterface::setColor(headingColor);
    std::cout << "Книги:" << std::endl;
    CommandLineInterface::setColor();
    BookTableDrawer *booksDrawer = new BookTableDrawer();
    booksDrawer->setBody(library->books);
    booksDrawer->recountCellSizes();
    booksDrawer->render();
    delete booksDrawer;
}
