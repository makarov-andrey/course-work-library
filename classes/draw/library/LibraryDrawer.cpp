#include <iostream>
#include "LibraryDrawer.h"
#include "../../../structures/Library.h"

LibraryDrawer::LibraryDrawer() {
    this->library = library;
}

LibraryDrawer::LibraryDrawer(Library *library) {
    LibraryDrawer();
    booksDrawer = new BookTableDrawer;
}

void LibraryDrawer::render() {
    std::cout << "�������� ����������: " << library->name << std::endl;
    std::cout << "�������� ����������: " << library->owner << std::endl;
    std::cout << "�����:" << std::endl;
    booksDrawer->render(library->books);
}

void LibraryDrawer::render(Library *library) {
    this->library = library;
    render();
}
