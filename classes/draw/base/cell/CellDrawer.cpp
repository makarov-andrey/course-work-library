#include <cmath>
#include <iostream>
#include "CellDrawer.h"
#include "../../../../headers/colors.h"
#include "../../../../functions/functions.h"

template<typename RowType>
CellDrawer<RowType>::CellDrawer() {
    size = heading.size();
}

template<typename RowType>
void CellDrawer<RowType>::renderHeading() {
    std::cout << formatAlignmentCenter(heading, size);
}

template<typename RowType>
void CellDrawer<RowType>::render() {
    std::cout << formatAlignmentLeft(getValue(), size);
}
