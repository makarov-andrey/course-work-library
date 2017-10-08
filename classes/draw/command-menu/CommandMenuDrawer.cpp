#include <iostream>
#include "CommandMenuDrawer.h"
#include "../../../headers/colors.h"
#include "../../../functions/functions.h"

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
    setColor(commandColor);
    std::cout << command->getPattern();
    setColor(descriptionColor);
    std::cout << " - " << command->description;
    setColor();
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
    setColor(argumentColor);
    std::cout << argument->name;
    setColor(descriptionColor);
    std::cout << " - " << argument->description;
    setColor();
    std::cout << std::endl;
}
