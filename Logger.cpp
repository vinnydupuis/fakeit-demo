#include "Logger.h"
#include "system/IFileSystem.h"

void Logger::log(const std::string &message) {
    FILE* f = FileSystem->fopen("log.txt", "a");
    FileSystem->fprintf(f, "%s\n", message.c_str());
    FileSystem->fclose(f);
}
