#include "SortDirectionCommandArgument.h"

SortDirectionCommandArgument::SortDirectionCommandArgument() {
    name = "direction";
    description = "����������� ���������� (asc - �� �����������, desc - �� ��������)";
    regexString = "asc|desc";
}
