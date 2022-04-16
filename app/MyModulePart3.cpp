/**
 * @file
 * @brief MyModule のパーティション
 */
module;
#include <iostream>
module MyModule:Partition3;

namespace mm {

// パーティション外に公開する関数
void publicPartialFunc3()
{
    std::cout << "publicPartialFunc3()" << std::endl;
}

// パーティション外に公開しない関数
void privatePartialFunc3()
{
    std::cout << "privatePartialFunc3()" << std::endl;
}

} // namespace mm
