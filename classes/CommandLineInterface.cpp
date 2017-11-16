#include <iostream>
#include <windows.h>
#include "CommandLineInterface.h"
#include "../functions/functions.h"
#include "LibraryFileMutator.h"

Library *CommandLineInterface::askLibrary() {
    std::cout << "������� ��� ����� ��� �������� ���������� ��� �������� ���� ������, ���� ������ ������� �����" << std::endl;
    std::string filename = askUntil(checkFileName, "������������ ��� �����. ���������� ��� ���");
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
    CommandLineInterface::seedFieldConsideringDefaultValue("�������� ����������", library->name);
    CommandLineInterface::seedFieldConsideringDefaultValue("�������� ����������", library->owner);
}

void CommandLineInterface::seedBook (Book *book) {
    CommandLineInterface::seedFieldConsideringDefaultValue("�����", book->author);
    CommandLineInterface::seedFieldConsideringDefaultValue("��������", book->title);
    CommandLineInterface::seedFieldConsideringDefaultValue("������������", book->publisher);
    CommandLineInterface::seedFieldConsideringDefaultValue("��� �������", book->year);
    CommandLineInterface::seedFieldConsideringDefaultValue("����� ��������", book->storePlace);
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
    std::cout << "������� �������: ";
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