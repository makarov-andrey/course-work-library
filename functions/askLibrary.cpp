#include <iostream>
#include "functions.h"
#include "../classes/utils/LibraryFileMutator.h"

Library *askLibrary() {
    std::cout << "������� ��� ����� ��� �������� ���������� ��� �������� ���� ������, ���� ������ ������� �����" << std::endl;
    std::string filename = askUntil(checkFileName, "������������ ��� �����. ���������� ��� ���");
    return filename.empty()
           ? createAndSeedLibrary()
           : LibraryFileMutator::load(filename);
}
