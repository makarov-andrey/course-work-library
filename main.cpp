#include <iostream>
#include "functions/functions.h"
#include "classes/draw/library/LibraryDrawer.h"
#include "classes/Router.h"
#include "globals.h"

int main() {
    config();

    library = seedLibrary();

    auto *libraryDrawer = new LibraryDrawer();
    libraryDrawer->setLibrary(library);

    auto *router = new Router;

    auto *commandMenuDrawer = new CommandMenuDrawer;
    commandMenuDrawer->commands = router->getCommands();

    while (true) {
        cleanConsole();
        libraryDrawer->render();
        commandMenuDrawer->render();

        setColor(COLOR_LIGHT_MAGENTA);
        std::cout << "¬ведите команду: ";
        setColor();
        std::string command;
        std::getline(std::cin, command);
        router->route(command);
    }
    return EXIT_SUCCESS;
}
