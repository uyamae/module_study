/**
 * @file
 * @brief クラス宣言
 */
module;
#include <memory>
export module MyClass4;

namespace mc {

/// 前方宣言
export class MyClass4;
///// メンバ関数の宣言
//export void MyClass4::func(); // NG: C2027 認識できない型 MyClass4

/// MyClass4 のunique_ptr を受け取る
export std::unique_ptr<MyClass4> get_myclass4();

/// クラス定義
export class MyClass4b
{
public:
    /// メンバ関数
    void func();
};

/// MyClass4b のunique_ptr を受け取る
export std::unique_ptr<MyClass4b> get_myclass4b();

}
