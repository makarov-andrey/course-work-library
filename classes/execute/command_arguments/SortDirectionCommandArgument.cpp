#include "SortDirectionCommandArgument.h"

SortDirectionCommandArgument::SortDirectionCommandArgument() {
    name = "direction";
    description = "Направление сортировки (asc - по возрастанию, desc - по убыванию)";
    regexString = "asc|desc";
}
