#include "SortDirectionCommandArgument.h"

SortDirectionCommandArgument::SortDirectionCommandArgument() {
    name = "asc|desc";
    description = "����������� ����������. asc - �� �����������, desc - �� ��������";
    regexString = "asc|desc";
}
