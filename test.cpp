#include "Logger.h"
#include "lest.hpp"
#include "system/IFileSystem.h"
#include "fakeit.hpp"

#define CASE(name) lest_CASE(specification, name)
lest::tests specification;

using namespace fakeit;

CASE("Logger" "Log to file") {

    // Prepare
    Mock<IFileSystem> mockFileSystem;
    FileSystem = &mockFileSystem.get();
    When(Method(mockFileSystem, fopen)).Return((FILE*)0x1234);
    When(Method(mockFileSystem, fprintf)).Return(0);
    When(Method(mockFileSystem, fclose)).Return();

    // Create
    Logger logger;

    // Execute
    logger.log("Allo!");

    // Verify
    Verify(Method(mockFileSystem, fopen).Using(StrEq("log.txt"), StrEq("a"))).Once();
    Verify(Method(mockFileSystem, fprintf).Using((FILE*)0x1234, StrEq("%s\n"), StrEq("Allo!"))).Once();
    Verify(Method(mockFileSystem, fclose).Using((FILE*)0x1234)).Once();
}
