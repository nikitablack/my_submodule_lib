#include <iostream>
#include <foo.hpp>

void foo()
{
    constexpr int32_t LIB_VERSION{3};

    std::cout << "My Submodule Lib Version: " << LIB_VERSION << std::endl;
}