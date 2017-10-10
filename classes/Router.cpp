#include "Router.h"
#include "execute/commands/CreateBookCommand.h"
#include "execute/commands/SaveToFileCommand.h"
#include "execute/commands/UpdateBookCommand.h"
#include "execute/commands/DeleteBookCommand.h"

Router::Router() {
    commands = new std::vector<Command*>;
    commands->push_back(new SaveToFileCommand);
    commands->push_back(new CreateBookCommand);
    commands->push_back(new UpdateBookCommand);
    commands->push_back(new DeleteBookCommand);
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
