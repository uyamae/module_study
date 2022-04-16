/**
 * @file
 * @brief MyModule のパーティション
 */
module;
#include <iostream>
module MyModule:Partition4;

namespace mm {

// パーティション外に公開する関数
void publicPartialFunc4()
{
    std::cout << "publicPartialFunc4()" << std::endl;
}

// パーティション外に公開しない関数
void privatePartialFunc4()
{
    std::cout << "privatePartialFunc4()" << std::endl;
}

} // namespace mm
