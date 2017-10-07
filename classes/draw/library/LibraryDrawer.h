#ifndef COURSE_WORK_LIBRARYDRAWER_H
#define COURSE_WORK_LIBRARYDRAWER_H


#include "../book/table/BookTableDrawer.h"
#include "../../../structures/Library.h"

class LibraryDrawer : public Drawable {
protected:
    Library *library;

public:
    void setLibrary (Library *library);
    void render();
};


#endif //COURSE_WORK_LIBRARYDRAWER_H
