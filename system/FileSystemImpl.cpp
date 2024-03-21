#include "FileSystemImpl.h"

IFileSystem* FileSystem;

FILE *FileSystemImpl::fopen(const char *string, const char *string1) {
    return ::fopen(string, string1);
}

int FileSystemImpl::fprintf(FILE *s, const char *f, const char *message) {
    return ::fprintf(s, f, message);
}

void FileSystemImpl::fclose(FILE *f) {
    ::fclose(f);
}
