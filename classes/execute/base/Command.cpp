#include "Command.h"
#include "../../../functions/functions.h"

Command::Command() {
    arguments = new std::map<std::string, CommandArgument*>;
}

void Command::setArgument(CommandArgument *argument) {
    arguments->insert(std::pair<std::string, CommandArgument*>(argument->name, argument));
}

CommandArgument *Command::findArgument(std::string argumentName) {
    return (*arguments)[argumentName];
}

std::string Command::getRegexString() {
    std::string regexString;
    int endOfLastMatch = 0;
    auto patternBuffer = this->pattern;
    iteratePatternArguments([&](CommandArgument *command, std::smatch match) mutable {
        regexString += shieldRegexSymbols(patternBuffer.substr(endOfLastMatch, match.position() - endOfLastMatch));
        regexString += "(" + command->regexString + ")";
        endOfLastMatch = match.position() + match.length();
    });
    regexString += pattern.substr(endOfLastMatch, pattern.size() - endOfLastMatch);
    return regexString;
}

void Command::iteratePatternArguments(std::function<void (CommandArgument*, std::smatch)> callback) {
    std::regex argumentNameRegex("<([^>]+)>");
    std::sregex_iterator begin(pattern.begin(), pattern.end(), argumentNameRegex), end;
    std::for_each(begin, end, [&](std::smatch match){
        CommandArgument *argument = findArgument(match[1]);
        if (argument) {
            callback(argument, match);
        }
    });
}

bool Command::match(std::string input) {
    std::smatch matches;
    std::string regexString = getRegexString();
    if (!std::regex_match(input, matches, std::regex(regexString))) {
        return false;
    }

    int argumentNumber = 1;
    iteratePatternArguments([&](CommandArgument *argument, std::smatch) mutable {
        argument->value = matches[argumentNumber];
        argumentNumber++;
    });
    return true;
}

std::string Command::getPattern() {
    return pattern;
}

std::map<std::string, CommandArgument *> *Command::getArguments() {
    return arguments;
}
