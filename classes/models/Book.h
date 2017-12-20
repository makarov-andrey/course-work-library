#ifndef COURSE_WORK_BOOK_H
#define COURSE_WORK_BOOK_H

#include <string>
#include <map>
#include "../Comparator.h"

class Book {
public:
    enum field {AUTHOR, TITLE, PUBLISHER, YEAR, STORE_PLACE};

    std::string author;
    std::string title;
    std::string publisher;
    std::string year;
    std::string storePlace;

    std::string getValue(field field);
    static Comparator::type getComparatorType(field field);

    void formatFields();
};


#endif //COURSE_WORK_BOOK_H
