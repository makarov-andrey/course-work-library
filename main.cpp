#include <iostream>
#include "functions/functions.h"
#include "classes/draw/library/LibraryDrawer.h"
#include "classes/Router.h"
#include "globals.h"
#include "classes/draw/message-queue/MessageQueueDrawer.h"

int main() {
    config();

    globalLibrary = CommandLineInterface::askLibrary();

    auto *libraryDrawer = new LibraryDrawer();
    libraryDrawer->setLibrary(globalLibrary);

    auto *router = new Router;

    auto *commandMenuDrawer = new CommandMenuDrawer();
    commandMenuDrawer->setCommands(router->getCommands());

    auto *messageQueueDrawer = new MessageQueueDrawer();
    messageQueueDrawer->setMessages(globalMessages);

    while (true) {
        CommandLineInterface::cleanConsole();
        libraryDrawer->render();
        commandMenuDrawer->render();
        messageQueueDrawer->render();
        router->route(CommandLineInterface::askCommand());
    }

    return EXIT_SUCCESS;
}
