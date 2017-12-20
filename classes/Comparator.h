#ifndef COURSE_WORK_COMPARATOR_H
#define COURSE_WORK_COMPARATOR_H


#include <string>

class Comparator {
public:
    enum type {STRING, INT};
    enum operatorType {GREATER, GREATER_OR_EQUALS, LESS, LESS_OR_EQUALS, EQUALS};
    static bool compare(std::string first, std::string second, type type = STRING, operatorType operatorType = GREATER);
    static bool compare(int first, int second, type type = INT, operatorType operatorType = GREATER);
    template<typename T> static bool abstractCompare(T first, T second, operatorType operatorType);
};


#endif //COURSE_WORK_COMPARATOR_H
