#include "BadBookFieldException.h"

char const *BadBookFieldException::what() const throw() {
    return "Неверное поле книги";
}
