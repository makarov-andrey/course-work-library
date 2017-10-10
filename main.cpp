#include <iostream>
#include "functions/functions.h"
#include "classes/draw/library/LibraryDrawer.h"
#include "classes/Router.h"
#include "globals.h"

int main() {
    config();

    library = askLibrary();

    auto *libraryDrawer = new LibraryDrawer();
    libraryDrawer->setLibrary(library);

    auto *router = new Router;

    auto *commandMenuDrawer = new CommandMenuDrawer;
    commandMenuDrawer->setCommands(router->getCommands());

    while (true) {
        cleanConsole();
        libraryDrawer->render();
        commandMenuDrawer->render();
        router->route(askCommand());
    }

    return EXIT_SUCCESS;
}
