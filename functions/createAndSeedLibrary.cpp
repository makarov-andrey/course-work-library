#include "../classes/models/Library.h"
#include "functions.h"
#include "../classes/CommandLineInterface.h"

Library *createAndSeedLibrary() {
    Library *library = new Library;
    CommandLineInterface::seedLibrary(library);
    return library;
}
