#ifndef COURSE_WORK_FUNCTIONS_H
#define COURSE_WORK_FUNCTIONS_H

#include <string>
#include <functional>
#include "../colors.h"
#include "../classes/models/Book.h"
#include "../classes/models/Library.h"

bool isFileExists(std::string fileName);
bool checkFileName(std::string fileName);
void config();

template<typename T> std::vector<T> *copyFilteredVector(std::vector<T> *vector, std::function<bool(T)> verdict){
    auto *filteredVector = new std::vector<T>;
    for(auto &it: *vector) {
        if (verdict(it)) {
            filteredVector->push_back(it);
        }
    }
    return filteredVector;
}


#endif //COURSE_WORK_FUNCTIONS_H
