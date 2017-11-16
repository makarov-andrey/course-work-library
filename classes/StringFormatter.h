#ifndef COURSE_WORK_STRINGFORMATTER_H
#define COURSE_WORK_STRINGFORMATTER_H

#include <string>

class StringFormatter {
public:
    static std::string formatAlignmentLeft (std::string input, int size);
    static std::string formatAlignmentRight (std::string input, int size);
    static std::string formatAlignmentCenter (std::string input, int size);
    static std::string shieldRegexSymbols(std::string input);
};


#endif //COURSE_WORK_STRINGFORMATTER_H
