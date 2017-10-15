#ifndef COURSE_WORK_BOOK_H
#define COURSE_WORK_BOOK_H

#include <string>
#include <map>

class Book {
public:
    std::map<std::string, std::string*> fields;

    std::string author;
    std::string title;
    std::string publisher;
    std::string year;
    std::string storePlace;

    Book();
};


#endif //COURSE_WORK_BOOK_H
