#include "Logger.h"
#include "lest.hpp"
#include "system/FileSystemImpl.h"

extern lest::tests specification;

int main(int argc, char *argv[]) {

    // Real world usage
    FileSystem = new FileSystemImpl();

    Logger logger;
    logger.log("Hello, World!");

    printf("Real usage done\n");




    // Run the unit tests
    int result = lest::run(specification, argc, argv);
    printf("Test return code: %d\n", result);
    return result;
}
