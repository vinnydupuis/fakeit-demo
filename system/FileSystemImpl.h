#pragma once

#include "IFileSystem.h"

class FileSystemImpl : public IFileSystem {
public:
    FILE *fopen(const char *filename, const char *mode) override;
    int fprintf(FILE *f, const char *format, const char *message) override;
    void fclose(FILE *f) override;
};
