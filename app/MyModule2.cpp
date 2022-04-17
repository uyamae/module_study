/**
 * @file
 * @brief モジュール実装
 */
module; // グローバルモジュールフラグメント
#include <iostream>
module MyModule;

namespace mm {

// モジュール外に公開する関数
void publicFunc2()
{
    //MyClass mc; // NG: C2079 未定義のクラス
    //mc.func();
    std::cout << "publicFunc2()" << std::endl;
}

// モジュール外に公開しない関数
void privateFunc2()
{
    std::cout << "privateFunc2()" << std::endl;
}

// モジュール実装ユニットで定義の関数
void myModule2Func()
{
    std::cout << "myModule2Func()" << std::endl;
}

} // namespace mm
