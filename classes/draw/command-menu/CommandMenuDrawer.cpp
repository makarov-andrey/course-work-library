#include <iostream>
#include "CommandMenuDrawer.h"
#include "../../../colors.h"
#include "../../../functions/functions.h"
#include "../../CommandLineInterface.h"

CommandMenuDrawer::CommandMenuDrawer() {
    commandColor = COLOR_YELLOW;
    argumentColor = COLOR_LIGHT_GREEN;
    descriptionColor = DEFAULT_CHAR_COLOR;
}

void CommandMenuDrawer::render() {
    std::cout << "Доступные команды:" << std::endl;
    for (auto &command: *commands) {
        renderCommand(command);
    }
    std::cout << std::endl;
}

void CommandMenuDrawer::renderCommand(Command *command) {
    CommandLineInterface::setColor(commandColor);
    std::cout << command->getPattern();
    CommandLineInterface::setColor(descriptionColor);
    std::cout << " - " << command->description;
    CommandLineInterface::setColor();
    if (!command->getArguments()->empty()) {
        std::cout << ". Принимает аргументы:";
    }
    std::cout << std::endl;
    command->iteratePatternArguments([&](CommandArgument *argument, std::smatch match){
        renderArgument(argument);
    });
}

void CommandMenuDrawer::renderArgument(CommandArgument *argument) {
    std::cout << std::string(3, ' ');
    CommandLineInterface::setColor(argumentColor);
    std::cout << argument->name;
    CommandLineInterface::setColor(descriptionColor);
    std::cout << " - " << argument->description;
    CommandLineInterface::setColor();
    std::cout << std::endl;
}

void CommandMenuDrawer::setCommands(std::vector<Command *> *commands) {
    this->commands = commands;
}

std::vector<Command *> *CommandMenuDrawer::getCommands() {
    return commands;
}
