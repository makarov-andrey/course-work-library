#include <libintl.h>
#include <windows.h>
#include "functions.h"

void config () {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setColor();
    cleanConsole();
}
