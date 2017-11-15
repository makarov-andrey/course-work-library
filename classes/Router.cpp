#include "Router.h"
#include "execute/commands/CreateBookCommand.h"
#include "execute/commands/SaveToFileCommand.h"
#include "execute/commands/UpdateBookCommand.h"
#include "execute/commands/DeleteBookCommand.h"
#include "execute/commands/SortCommand.h"
#include "execute/commands/FilterCommand.h"
#include "../globals.h"
#include "messages/ErrorMessage.h"
#include "exceptions/BadInputException.h"
#include "exceptions/BadCommandException.h"
#include "messages/SuccessMessage.h"

Router::Router() {
    commands = new std::vector<Command*>;
    commands->push_back(new SaveToFileCommand);
    commands->push_back(new CreateBookCommand);
    commands->push_back(new UpdateBookCommand);
    commands->push_back(new DeleteBookCommand);
    commands->push_back(new SortCommand);
    commands->push_back(new FilterCommand);
}

std::vector<Command *> *Router::getCommands() {
    return commands;
}

void Router::route(std::string input) {
    try {
        for (auto &command: *commands) {
            if (command->match(input)) {
                command->execute();
                if (!command->successMessage.empty()) {
                    globalMessages->push(new SuccessMessage(command->successMessage));
                }
                return;
            }
        }
        throw BadCommandException();
    } catch (const BadInputException &exception) {
        globalMessages->push(new ErrorMessage(exception.what()));
        return;
    }
}
