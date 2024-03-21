#include "Logger.h"
#include "lest.hpp"
#include "system/FileSystemImpl.h"

extern lest::tests specification;

int main(int argc, char *argv[]) {

    // Real world usage
    FileSystem = new FileSystemImpl();

    Logger logger;
    logger.log("Hello, World!");




    // Run the unit tests

    return lest::run(specification, argc, argv);
}
