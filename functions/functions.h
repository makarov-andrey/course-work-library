#ifndef COURSE_WORK_FUNCTIONS_H
#define COURSE_WORK_FUNCTIONS_H

#include <string>
#include "../headers/colors.h"
#include "../structures/Book.h"
#include "../structures/Library.h"

Library *seedLibrary();
std::string askUntil(bool (*validator)(std::string), std::string errorMessage = "");
bool isFileExists(std::string fileName);
bool checkFileName(std::string fileName);
Library *loadLibraryFromFile(std::string fileName);
Library *createLibrary();

bool checkCommand (std::string command);
Book *createBookFromString (std::string line);
void cleanConsole(char fill = ' ');
void setColor(int charColor = DEFAULT_CHAR_COLOR, int backgroundColor = DEFAULT_BACKGROUND_COLOR);
std::string formatAlignmentLeft (std::string input, int size);
std::string formatAlignmentRight (std::string input, int size);
std::string formatAlignmentCenter (std::string input, int size);
void config ();
std::string shieldRegexSymbols(std::string input);


#endif //COURSE_WORK_FUNCTIONS_H
