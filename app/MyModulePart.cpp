/**
 * @file
 * @brief MyModule のパーティション
 */
module;
#include <iostream>
module MyModule:Partition;

namespace mm {

// パーティション外に公開する関数
void publicPartialFunc()
{
    std::cout << "publicPartialFunc()" << std::endl;
}

// パーティション外に公開しない関数
void privatePartialFunc()
{
    std::cout << "privatePartialFunc()" << std::endl;
}

} // namespace mm
