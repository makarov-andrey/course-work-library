#ifndef COURSE_WORK_ROUTER_H
#define COURSE_WORK_ROUTER_H

#include <string>
#include <vector>
#include "execute/base/Command.h"

class Router {
protected:
    std::vector<Command*> *commands;

public:
    Router();
    std::vector<Command*> *getCommands();
    void route(std::string command);
};


#endif //COURSE_WORK_ROUTER_H
