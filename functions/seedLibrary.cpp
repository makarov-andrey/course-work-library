#include <iostream>
#include "functions.h"
#include "../structures/Library.h"
#include "../classes/LibraryFileMutator.h"

Library *seedLibrary () {
    std::cout << "Введите имя файла для загрузки библиотеки или оставьте поле пустым, если хотите создать новую" << std::endl;
    std::string filename = askUntil(checkFileName, "Неправильное имя файла. Попробуйте еще раз");
    return filename.empty()
           ? askAndCreateLibrary()
           : LibraryFileMutator::load(filename);
}
