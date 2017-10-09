#ifndef COURSE_WORK_COMMANDARGUMENT_H
#define COURSE_WORK_COMMANDARGUMENT_H


#include <string>

class CommandArgument {
public:
    std::string name;
    std::string regexString = ".+";
    std::string value;
    std::string description;
};


#endif //COURSE_WORK_COMMANDARGUMENT_H
