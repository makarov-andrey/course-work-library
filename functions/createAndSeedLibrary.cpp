#include "../structures/Library.h"
#include "functions.h"

Library *createAndSeedLibrary() {
    Library *library = new Library;
    seedLibrary(library);
    return library;
}
