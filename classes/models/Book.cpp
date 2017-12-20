#include "Book.h"
#include "../Comparator.h"

Comparator::type Book::getComparatorType(field field) {
    switch (field) {
        case AUTHOR:
        case TITLE:
        case PUBLISHER:
        case STORE_PLACE:
            return Comparator::STRING;
        case YEAR:
            return Comparator::INT;
    }
}

std::string Book::getValue(field field) {
    switch (field) {
        case AUTHOR:
            return author;
        case TITLE:
            return title;
        case PUBLISHER:
            return publisher;
        case STORE_PLACE:
            return storePlace;
        case YEAR:
            return year;
    }
}

void Book::formatFields() {
    year = std::to_string(std::stoi(year));
}
