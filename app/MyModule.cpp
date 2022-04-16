/**
 * @file
 * @brief モジュール実装
 */
module; // グローバルモジュールフラグメント
#include <iostream>
module MyModule;
//import MyModule:Partition2; // NG: C2143, C2059 構文エラー
import :Partition2;

namespace mm {

// モジュール外に公開する関数
void publicFunc()
{
    std::cout << "publicFunc()" << std::endl;

    //publicPartialFunc(); // NG: C3816 識別子が見つからない
    //privatePartialFunc(); // NG: C3816 識別子が見つからない
    publicPartialFunc2(); // OK: export している
    privatePartialFunc2(); // OK: export していない
}

// モジュール外に公開しない関数
void privateFunc()
{
    std::cout << "privateFunc()" << std::endl;
}

} // namespace mm
