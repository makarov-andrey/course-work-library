#include "Book.h"

Book::Book() {
    fields["author"] = &author;
    fields["title"] = &title;
    fields["publisher"] = &publisher;
    fields["year"] = &year;
    fields["storePlace"] = &storePlace;
}
