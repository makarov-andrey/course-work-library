#ifndef COURSE_WORK_COMMANDLINEINTERFACE_H
#define COURSE_WORK_COMMANDLINEINTERFACE_H


#include "models/Library.h"
#include "../colors.h"

class CommandLineInterface {
public:
    static Library *askLibrary();
    static std::string askUntil(bool (*validator)(std::string), std::string errorMessage = "");
    static void seedLibrary (Library *library);
    static void seedBook (Book *book);
    static void cleanConsole(char fill = ' ');
    static void setColor(int charColor = DEFAULT_CHAR_COLOR, int backgroundColor = DEFAULT_BACKGROUND_COLOR);
    static std::string askCommand();
    static void seedFieldConsideringDefaultValue (std::string title, std::string &field);
};


#endif //COURSE_WORK_COMMANDLINEINTERFACE_H
