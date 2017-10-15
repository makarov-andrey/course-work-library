#include "SortDirectionCommandArgument.h"

SortDirectionCommandArgument::SortDirectionCommandArgument() {
    name = "asc|desc";
    description = "Направление сортировки. asc - по возрастанию, desc - по убыванию";
    regexString = "asc|desc";
}
