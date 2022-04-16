/**
 * @file
 * @brief モジュール実装
 */
module; // グローバルモジュールフラグメント
#include <iostream>
module MyModule;
//import MyModule:Partition2; // NG: C2143, C2059 構文エラー
import :Partition2;
import :Partition5;

namespace mm {

extern void myModule2Func();
//extern void privatePartialFunc5(); // 前方宣言があってもLNK2019 となる

// モジュール外に公開する関数
void publicFunc()
{
    std::cout << "publicFunc()" << std::endl;

    //publicPartialFunc(); // NG: C3816 識別子が見つからない
    //privatePartialFunc(); // NG: C3816 識別子が見つからない
    publicPartialFunc2(); // OK: export している
    privatePartialFunc2(); // OK: export していない
    publicPartialFunc3();
    //privatePartialFunc3(); // NG: C3861 識別子が見つからない
    publicPartialFunc4();
    //privatePartialFunc4(); // NG: C3861 識別子が見つからない
    publicPartialFunc5();
    //privatePartialFunc5(); // NG: C3861 識別子が見つからない
    myModule2Func(); // 前方宣言があれば呼び出し可能
}

// モジュール外に公開しない関数
void privateFunc()
{
    std::cout << "privateFunc()" << std::endl;
}

} // namespace mm
