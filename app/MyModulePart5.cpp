/**
 * @file
 * @brief MyModule のパーティション
 */
module;
#include <iostream>
module MyModule:Partition5;

namespace mm {

// パーティション外に公開する関数
void publicPartialFunc5()
{
    std::cout << "publicPartialFunc5()" << std::endl;
}

// パーティション外に公開しない関数
void privatePartialFunc5()
{
    std::cout << "privatePartialFunc5()" << std::endl;
}

} // namespace mm
