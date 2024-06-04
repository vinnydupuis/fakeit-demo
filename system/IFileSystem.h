#pragma once

#include <cstdio>

class IFileSystem {
public:
    virtual FILE *fopen(const char *filename, const char *mode) = 0;
    virtual int fprintf(FILE *f, const char *format, const char *message) = 0;
    virtual void fclose(FILE *f) = 0;
};

extern IFileSystem* FileSystem;
