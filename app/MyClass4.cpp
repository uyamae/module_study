/**
 * @file
 * @brief クラス定義
 */
module;
#include <iostream>
module MyClass4;

namespace mc {

// クラス定義
class MyClass4
{
public:
    void func()
    {
        std::cout << "MyClass4::func()" << std::endl;
    }
};

// MyClass4 のunique_ptr を受け取る
std::unique_ptr<MyClass4> get_myclass4()
{
    return std::make_unique<MyClass4>();
}

// メンバ関数
void MyClass4b::func()
{
    std::cout << "MyClass4b::func()" << std::endl;
}

// MyClass4b のunique_ptr を受け取る
std::unique_ptr<MyClass4b> get_myclass4b()
{
    return std::make_unique<MyClass4b>();
}

}

