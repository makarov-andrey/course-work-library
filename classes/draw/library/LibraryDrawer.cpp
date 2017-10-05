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
    std::cout << "Название библиотеки: " << library->name << std::endl;
    std::cout << "Владелец библиотеки: " << library->owner << std::endl;
    std::cout << "Книги:" << std::endl;
    booksDrawer->render(library->books);
}

void LibraryDrawer::render(Library *library) {
    this->library = library;
    render();
}
