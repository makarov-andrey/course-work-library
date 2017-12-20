//
// Created by DasDаOne on 15.10.2017.
//

#include "CompareOperatorCommandArgument.h"
#include "../../exceptions/BadCompareOperatorException.h"

CompareOperatorCommandArgument::CompareOperatorCommandArgument() {
    name = "operator";
    description = "Оператор сравнения (=, >, <, >=, <=)";
    regexString = "=|>|<|>=|<=";
}

Comparator::operatorType CompareOperatorCommandArgument::toComparatorEnumOperator() {
    if (value == "=") {
        return Comparator::EQUALS;
    } else if (value == ">") {
        return Comparator::GREATER;
    } else if (value == "<") {
        return Comparator::LESS;
    } else if (value == ">=") {
        return Comparator::GREATER_OR_EQUALS;
    } else if (value == "<=") {
        return Comparator::LESS_OR_EQUALS;
    }
    throw BadCompareOperatorException();
}
