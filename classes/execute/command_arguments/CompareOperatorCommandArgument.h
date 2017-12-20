#ifndef COURSE_WORK_OPERATORCOMMANDARGUMENT_H
#define COURSE_WORK_OPERATORCOMMANDARGUMENT_H


#include "../base/CommandArgument.h"
#include "../../Comparator.h"

class CompareOperatorCommandArgument : public CommandArgument {
public:
    CompareOperatorCommandArgument();
    Comparator::operatorType toComparatorEnumOperator();
};


#endif //COURSE_WORK_OPERATORCOMMANDARGUMENT_H
