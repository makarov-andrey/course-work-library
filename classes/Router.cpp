#include "Router.h"
#include "execute/commands/CreateBookCommand.h"
#include "execute/commands/SaveToFileCommand.h"
#include "execute/commands/UpdateBookCommand.h"

Router::Router() {
    commands = new std::vector<Command*>;
    commands->push_back(new SaveToFileCommand);
    commands->push_back(new CreateBookCommand);
    commands->push_back(new UpdateBookCommand);
}

std::vector<Command *> *Router::getCommands() {
    return commands;
}

void Router::route(std::string input) {
    for (auto &command: *commands) {
        if (command->match(input)) {
            command->execute();
            return;
        }
    }
    //TODO error message
}
