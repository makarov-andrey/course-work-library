#include "BadBookIndexException.h"

char const *BadBookIndexException::what() const throw() {
    return "Неверный индекс книги";
}
