#include <iostream>
#include <foo.hpp>

void foo()
{
    constexpr int32_t LIB_VERSION{1};

    std::cout << "My Submodule Lib " << LIB_VERSION << std::endl;
}