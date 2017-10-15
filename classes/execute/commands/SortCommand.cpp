#include "SortCommand.h"
#include "../../../globals.h"

SortCommand::SortCommand() {
    fieldArgument = new FieldCommandArgument;
    setArgument(fieldArgument);
    sortDirectionArgument = new SortDirectionCommandArgument;
    setArgument(sortDirectionArgument);
    pattern = "sort by <" + fieldArgument->name + "> <" + sortDirectionArgument->name + ">";
    description = "Отсортировать список книг";
    successMessage = "Список книг успешно отсортирован";
}

void SortCommand::execute() {
    std::sort(globalLibrary->books->begin(), globalLibrary->books->end(), [&](Book *first, Book *second) -> bool {
        bool result = *first->fields[fieldArgument->value] < *second->fields[fieldArgument->value];
        return sortDirectionArgument->value == "asc" == result;
    });
}
