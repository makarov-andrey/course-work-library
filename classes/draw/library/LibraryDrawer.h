#ifndef COURSE_WORK_LIBRARYDRAWER_H
#define COURSE_WORK_LIBRARYDRAWER_H


#include "../book/table/BookTableDrawer.h"
#include "../../models/Library.h"

class LibraryDrawer : public Drawable {
protected:
    Library *library;

    void renderName();
    void renderOwner();
    void renderBooks();

public:
    int headingColor;

    LibraryDrawer();
    void setLibrary (Library *library);
    void render();
};


#endif //COURSE_WORK_LIBRARYDRAWER_H
