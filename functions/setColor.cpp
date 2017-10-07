#include <windows.h>
#include "../headers/colors.h"

void setColor(int charColor = DEFAULT_CHAR_COLOR, int backgroundColor = DEFAULT_BACKGROUND_COLOR) {
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, (WORD)((backgroundColor << 4) | charColor));
}
