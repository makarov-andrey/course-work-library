#ifndef COURSE_WORK_COMMAND_H
#define COURSE_WORK_COMMAND_H


#include <map>
#include <regex>
#include "../Executable.h"
#include "CommandArgument.h"

class Command : public Executable {
protected:
    std::string pattern;
    std::map<std::string, CommandArgument*> *arguments;
    std::string getRegexString();

public:
    Command();
    std::string description;
    bool match (std::string input);
    void setArgument(CommandArgument *argument);
    CommandArgument *findArgument(std::string argumentName);
    std::string getPattern();
    void iteratePatternArguments(std::function<void (CommandArgument*, std::smatch)> callback);
    std::map<std::string, CommandArgument*> *getArguments();
};


#endif //COURSE_WORK_COMMAND_H
