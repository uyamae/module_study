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

    //publicPartialFunc3(); // NG: C3861 識別子が見つからない
    //privatePartialFunc3(); // NG: C3861 識別子が見つからない
    //publicPartialFunc4(); // NG: C3861 識別子が見つからない
    //privatePartialFunc4(); // NG: C3861 識別子が見つからない
    //publicPartialFunc5(); // NG: C3861 識別子が見つからない
    //privatePartialFunc5(); // NG: C3861 識別子が見つからない
}

// パーティション外に公開しない関数
void privatePartialFunc2()
{
    std::cout << "privatePartialFunc2()" << std::endl;
}

} // namespace mm
