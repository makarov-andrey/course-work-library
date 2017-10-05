#ifndef COURSE_WORK_LIBRARYDRAWER_H
#define COURSE_WORK_LIBRARYDRAWER_H


#include "../book/table/BookTableDrawer.h"
#include "../../../structures/Library.h"

class LibraryDrawer : public Drawable {
public:
    Library *library;
    BookTableDrawer *booksDrawer;

    LibraryDrawer();
    LibraryDrawer(Library *library);
    void render();
    void render(Library *library);
};


#endif //COURSE_WORK_LIBRARYDRAWER_H
