#include "SaveToFileCommand.h"
#include "../command_arguments/FileCommandArgument.h"

SaveToFileCommand::SaveToFileCommand() {
    auto fileArgument = new FileCommandArgument;
    setArgument(fileArgument);
    pattern = "save to <" + fileArgument->name + ">";
    description = "Сохранить библиотеку в файл";
}

void SaveToFileCommand::execute() {

}
