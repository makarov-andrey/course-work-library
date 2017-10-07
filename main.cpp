#include <iostream>
#include <conio.h>
#include "functions/functions.h"
#include "structures/Library.h"
#include "classes/draw/library/LibraryDrawer.h"

int main() {
    setlocale(LC_ALL, "Russian");
    Library *library = seedLibrary();
    LibraryDrawer *drawer = new LibraryDrawer();
    drawer->setLibrary(library);
    cleanConsole();
    drawer->render();
    return EXIT_SUCCESS;
}
