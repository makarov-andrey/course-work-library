#include "SaveToFileCommand.h"
#include "../../LibraryFileMutator.h"
#include "../../../globals.h"

SaveToFileCommand::SaveToFileCommand() {
    fileArgument = new FileCommandArgument;
    setArgument(fileArgument);
    pattern = "save to <" + fileArgument->name + ">";
    description = "��������� ���������� � ����";
}

void SaveToFileCommand::execute() {
    LibraryFileMutator::save(library, fileArgument->value);
}
