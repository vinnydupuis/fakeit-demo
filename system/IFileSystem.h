#pragma once

#include <cstdio>

class IFileSystem {
public:
    virtual FILE *fopen(const char *string, const char *string1) = 0;
    virtual int fprintf(FILE *s, const char *f, const char *message) = 0;
    virtual void fclose(FILE *f) = 0;
};

extern IFileSystem* FileSystem;
