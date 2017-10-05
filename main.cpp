#include <iostream>
#include <conio.h>
#include "functions/functions.h"
#include "structures/Library.h"
#include "classes/draw/library/LibraryDrawer.h"

int main() {
    setlocale(LC_ALL, "Russian");
    Library *library = seedLibrary();
    LibraryDrawer *drawer = new LibraryDrawer(library);
    while (true) {
        cleanConsole();
        drawer->render();
        _getch();
    }
    return EXIT_SUCCESS;
}
