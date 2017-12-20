#include "Comparator.h"

bool Comparator::compare(std::string first, std::string second, type type, operatorType operatorType) {
    switch (type) {
        case INT:
            return Comparator::compare(std::stoi(first), std::stoi(second), type, operatorType);
        case STRING:
            break;
    }

    abstractCompare<std::string>(first, second, operatorType);
}
bool Comparator::compare(int first, int second, type type, operatorType operatorType) {
    switch (type) {
        case INT:
            break;
        case STRING:
            return Comparator::compare(std::to_string(first), std::to_string(second), type, operatorType);
    }

    abstractCompare<int>(first, second, operatorType);
}

template<typename T>
bool Comparator::abstractCompare(T first, T second, Comparator::operatorType operatorType) {
    switch (operatorType) {
        case GREATER:
            return first > second;
        case GREATER_OR_EQUALS:
            return first >= second;
        case LESS:
            return first < second;
        case LESS_OR_EQUALS:
            return first <= second;
        case EQUALS:
            return first == second;
    }
}
