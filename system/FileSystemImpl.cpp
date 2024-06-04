#include "FileSystemImpl.h"

IFileSystem* FileSystem;

FILE *FileSystemImpl::fopen(const char *filename, const char *mode) {
    return ::fopen(filename, mode);
}

int FileSystemImpl::fprintf(FILE *f, const char *format, const char *message) {
    return ::fprintf(f, format, message);
}

void FileSystemImpl::fclose(FILE *f) {
    ::fclose(f);
}
