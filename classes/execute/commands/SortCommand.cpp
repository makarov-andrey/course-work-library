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
        Book::field field = fieldArgument->toBookEnumField();
        Comparator::type type = Book::getComparatorType(field);
        std::string firstValue = first->getValue(field);
        std::string secondValue = second->getValue(field);
        return sortDirectionArgument->value == "asc" == Comparator::compare(firstValue, secondValue, type);
    });
}
