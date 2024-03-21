#pragma once

#include "IFileSystem.h"

class FileSystemImpl : public IFileSystem {
public:
    FILE *fopen(const char *string, const char *string1) override;
    int fprintf(FILE *s, const char *f, const char *message) override;
    void fclose(FILE *f) override;
};
