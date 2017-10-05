#include <iostream>
#include "LibraryDrawer.h"
#include "../../../structures/Library.h"

LibraryDrawer::LibraryDrawer() {
    tableDrawer = new BookTableDrawer;
}

void LibraryDrawer::render() {
    std::cout << "�������� ����������: " << library->name << std::endl;
    std::cout << "�������� ����������: " << library->owner << std::endl;
    std::cout << "�����:" << std::endl;
    tableDrawer->books = library->books;
    tableDrawer->recountCellSizes();
    tableDrawer->render();
}
