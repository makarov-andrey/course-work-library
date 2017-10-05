#include <iostream>
#include <string>
#include "functions.h"

bool checkFileName(std::string fileName) {
    return fileName.empty() || isFileExists(fileName);
}
