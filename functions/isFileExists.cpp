#include <string>
#include <fstream>

bool isFileExists (std::string fileName) {
    std::ifstream file;
    file.open(fileName);
    file.close();
    return (bool) file;
}