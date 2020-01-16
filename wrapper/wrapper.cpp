#include "lib.h"

extern "C" __declspec(dllexport) Test *Test_new()
{
    return new Test();
}

extern "C" __declspec(dllexport) void Test_sayHello(Test *test)
{
    test->sayHello();
}