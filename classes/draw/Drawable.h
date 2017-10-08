#ifndef COURSE_WORK_DRAWABLE_H
#define COURSE_WORK_DRAWABLE_H

#include <basetyps.h>
#include "command-menu/CommandMenuDrawer.h"

interface Drawable {
public:
    virtual void render() = 0;
};


#endif //COURSE_WORK_DRAWABLE_H
