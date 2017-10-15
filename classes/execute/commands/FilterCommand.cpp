#include "FilterCommand.h"
#include "../../../functions/functions.h"
#include "../../../globals.h"
#include "../../exceptions/BadCompareOperatorException.h"

FilterCommand::FilterCommand() {
    fieldArgument = new FieldCommandArgument;
    setArgument(fieldArgument);

    compareOperatorArgument = new CompareOperatorCommandArgument;
    setArgument(compareOperatorArgument);

    valueArgument = new ValueCommandArgument;
    setArgument(valueArgument);

    pattern = "filter <" + fieldArgument->name + "> <" + compareOperatorArgument->name + "> <" + valueArgument->name + ">";

    description = "Отфильтровать список книг";
    successMessage = "Список книг успешно отфильтрован";
}

void FilterCommand::execute() {
    filterVector<Book*>(globalLibrary->books, [&](Book *book) -> bool {
        std::string fieldValue = *book->fields[fieldArgument->value];
        std::string compareOperator = compareOperatorArgument->value;
        if (compareOperator == "=") {
            return fieldValue == valueArgument->value;
        } else if (compareOperator == ">") {
            return fieldValue > valueArgument->value;
        } else if (compareOperator == "<") {
            return fieldValue < valueArgument->value;
        } else if (compareOperator == ">=") {
            return fieldValue >= valueArgument->value;
        } else if (compareOperator == "<=") {
            return fieldValue <= valueArgument->value;
        }
        throw BadCompareOperatorException();
    });
}
