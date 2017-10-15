#ifndef COURSE_WORK_BORDERDRAWER_H
#define COURSE_WORK_BORDERDRAWER_H


class BorderDrawer {
public:
    int borderColor;
    BorderDrawer();
    virtual int getBorderWidth() = 0;
    void renderHorizontalBorderLine();
    void renderVerticalBorderSymbol();
};


#endif //COURSE_WORK_BORDERDRAWER_H
