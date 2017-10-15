#include "BadCommandException.h"

char const *BadCommandException::what() const throw() {
    return "Команда не найдена";
}
