#include <iostream>
#include "LibraryDrawer.h"
#include "../../../structures/Library.h"

LibraryDrawer::LibraryDrawer() {
    tableDrawer = new BookTableDrawer;
}

void LibraryDrawer::render() {
    std::cout << "Название библиотеки: " << library->name << std::endl;
    std::cout << "Владелец библиотеки: " << library->owner << std::endl;
    std::cout << "Книги:" << std::endl;
    tableDrawer->books = library->books;
    tableDrawer->recountCellSizes();
    tableDrawer->render();
}
