//
// Created by DasDаOne on 15.10.2017.
//

#include "CompareOperatorCommandArgument.h"

CompareOperatorCommandArgument::CompareOperatorCommandArgument() {
    name = "operator";
    description = "Оператор сравнения (=, >, <, >=, <=)";
    regexString = "=|>|<|>=|<=";
}
