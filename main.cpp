#include <iostream>
#include "functions/functions.h"
#include "structures/Library.h"

int main() {
    setlocale(LC_ALL, "Russian");
    Library *library = seedLibrary();
    while (true) {
        cleanConsole();
        library->render();
    }
    return EXIT_SUCCESS;
}
