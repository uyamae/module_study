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
import MyClass;
import MyClass2;

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

    mc::MyClass c;
    mc::MyClass2 c2;
    c.func();
    //c.call_func(&c2); // NG: C2664 引数をmc::MyClass2 * からmc::MyClass2 * に変換できない
    c2.func();
    c2.call_func(&c);
}

// モジュール外に公開しない関数
void privateFunc()
{
    std::cout << "privateFunc()" << std::endl;
}

// モジュール外に公開するクラス宣言
class MyClass
{
public:
    MyClass()
    {
        std::cout << "MyClass::MyClass()" << std::endl;
    }
    ~MyClass()
    {
        std::cout << "MyClass::MyClass()" << std::endl;
    }
    void func()
    {
        std::cout << "MyClass::func()" << std::endl;
        // NG: C2065 MY_MODULE_VERSION は定義されていない識別子
        //std::cout << "MY_MODULE_VERSION: " << MY_MODULE_VERSION << std::endl;
        std::cout << "MY_MODULE_VERSION: " << MyModuleVersion() << std::endl;
    }
};

} // namespace mm
