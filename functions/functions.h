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

template<typename T> void filterVector(std::vector<T> *vector, std::function<bool(T)> verdict){
    for(typename std::vector<T>::iterator it = vector->begin(); it != vector->end(); ++it) {
        if (!verdict(*it.base())) {
            vector->erase(it);
            it--;
        }
    }
}


#endif //COURSE_WORK_FUNCTIONS_H
