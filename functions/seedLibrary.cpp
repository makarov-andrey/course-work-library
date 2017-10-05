#include <iostream>
#include "functions.h"
#include "../structures/Library.h"

Library *seedLibrary () {
    std::cout << "������� ��� ����� ��� �������� ���������� ��� �������� ���� ������, ���� ������ ������� �����" << std::endl;
    std::string filename = askUntil(checkFileName, "������������ ��� �����. ���������� ��� ���");
    return filename.empty()
           ? createLibrary()
           : loadLibraryFromFile(filename);
}
