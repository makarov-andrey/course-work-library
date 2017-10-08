#include <iostream>
#include "LibraryDrawer.h"
#include "../../../structures/Library.h"

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
    setColor(headingColor);
    std::cout << "�������� ����������: ";
    setColor();
    std::cout << library->name << std::endl;
}

void LibraryDrawer::renderOwner() {
    setColor(headingColor);
    std::cout << "�������� ����������: ";
    setColor();
    std::cout << library->owner << std::endl;
}

void LibraryDrawer::renderBooks() {
    setColor(headingColor);
    std::cout << "�����:" << std::endl;
    setColor();
    BookTableDrawer *booksDrawer = new BookTableDrawer();
    booksDrawer->setBody(library->books);
    booksDrawer->recountCellSizes();
    booksDrawer->render();
    delete booksDrawer;
}
