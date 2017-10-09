#include <iostream>
#include "functions.h"
#include "../structures/Library.h"
#include "../classes/LibraryFileMutator.h"

Library *seedLibrary () {
    std::cout << "������� ��� ����� ��� �������� ���������� ��� �������� ���� ������, ���� ������ ������� �����" << std::endl;
    std::string filename = askUntil(checkFileName, "������������ ��� �����. ���������� ��� ���");
    return filename.empty()
           ? askAndCreateLibrary()
           : LibraryFileMutator::load(filename);
}
