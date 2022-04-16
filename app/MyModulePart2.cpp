/**
 * @file
 * @brief MyModule のパーティション
 */
module;
#include <iostream>
module MyModule:Partition2;

namespace mm {

// パーティション外に公開する関数
void publicPartialFunc2()
{
    std::cout << "publicPartialFunc2()" << std::endl;
}

// パーティション外に公開しない関数
void privatePartialFunc2()
{
    std::cout << "privatePartialFunc2()" << std::endl;
}

} // namespace mm
