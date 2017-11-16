#include <iostream>
#include <windows.h>
#include "CommandLineInterface.h"
#include "../functions/functions.h"
#include "LibraryFileMutator.h"

Library *CommandLineInterface::askLibrary() {
    std::cout << "Введите имя файла для загрузки библиотеки или оставьте поле пустым, если хотите создать новую" << std::endl;
    std::string filename = askUntil(checkFileName, "Неправильное имя файла. Попробуйте еще раз");
    if (filename.empty()) {
        Library *library = new Library;
        CommandLineInterface::seedLibrary(library);
        return library;
    } else {
        return LibraryFileMutator::load(filename);
    }
}

std::string CommandLineInterface::askUntil(bool (*validator)(std::string), std::string errorMessage) {
    std::string input;
    std::getline(std::cin, input);
    while (!validator(input)) {
        if (!errorMessage.empty()) {
            std::cout << errorMessage << std::endl;
        }
        std::getline(std::cin, input);
    }
    return input;
}

void CommandLineInterface::seedLibrary (Library *library) {
    CommandLineInterface::seedFieldConsideringDefaultValue("Название библиотеки", library->name);
    CommandLineInterface::seedFieldConsideringDefaultValue("Владелец библиотеки", library->owner);
}

void CommandLineInterface::seedBook (Book *book) {
    CommandLineInterface::seedFieldConsideringDefaultValue("Автор", book->author);
    CommandLineInterface::seedFieldConsideringDefaultValue("Название", book->title);
    CommandLineInterface::seedFieldConsideringDefaultValue("Издательство", book->publisher);
    CommandLineInterface::seedFieldConsideringDefaultValue("Год издания", book->year);
    CommandLineInterface::seedFieldConsideringDefaultValue("Место хранения", book->storePlace);
}

void CommandLineInterface::cleanConsole(char fill) {
    COORD tl = {0,0};
    CONSOLE_SCREEN_BUFFER_INFO s;
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(console, &s);
    DWORD written, cells = s.dwSize.X * s.dwSize.Y;
    FillConsoleOutputCharacter(console, fill, cells, tl, &written);
    FillConsoleOutputAttribute(console, s.wAttributes, cells, tl, &written);
    SetConsoleCursorPosition(console, tl);
}

void CommandLineInterface::setColor(int charColor, int backgroundColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (WORD)((backgroundColor << 4) | charColor));
}

std::string CommandLineInterface::askCommand () {
    CommandLineInterface::setColor(COLOR_LIGHT_RED);
    std::cout << "Введите команду: ";
    CommandLineInterface::setColor();
    std::string command;
    std::getline(std::cin, command);
    return command;
}

void CommandLineInterface::seedFieldConsideringDefaultValue (std::string title, std::string &field) {
    std::cout << title;
    if (!field.empty()) {
        std::cout << " (" << field << ")";
    }
    std::cout << ": ";
    std::string input;
    std::getline(std::cin, input);
    if (!input.empty()) {
        field = input;
    }
}