#include "FilterCommand.h"
#include "../../../functions/functions.h"
#include "../../../globals.h"
#include "../../exceptions/BadCompareOperatorException.h"
#include "../../draw/book/table/BookTableDrawer.h"

FilterCommand::FilterCommand() {
    fieldArgument = new FieldCommandArgument;
    setArgument(fieldArgument);

    compareOperatorArgument = new CompareOperatorCommandArgument;
    setArgument(compareOperatorArgument);

    valueArgument = new ValueCommandArgument;
    setArgument(valueArgument);

    pattern = "filter <" + fieldArgument->name + "> <" + compareOperatorArgument->name + "> <" + valueArgument->name + ">";

    description = "Отфильтровать список книг";
}

void FilterCommand::execute() {
    CommandLineInterface::cleanConsole();

    auto filteredVector = copyFilteredVector<Book *>(globalLibrary->books, [&](Book *book) -> bool {
        Book::field field = fieldArgument->toBookEnumField();
        Comparator::type type = Book::getComparatorType(field);
        std::string fieldValue = book->getValue(field);
        Comparator::operatorType operatorType = compareOperatorArgument->toComparatorEnumOperator();
        return Comparator::compare(fieldValue, valueArgument->value, type, operatorType);
    });

    std::cout << "Отфильтрованный список книг:" << std::endl;
    BookTableDrawer bookTableDrawer;
    bookTableDrawer.setBody(filteredVector);
    bookTableDrawer.render();
    CommandLineInterface::print("Нажмите enter чтобы продолжить:", COLOR_LIGHT_RED);

    std::string a;
    std::getline(std::cin, a);

    delete filteredVector;
}
