/**
 * @file
 * @brief クラス
 */
module;
export module MyClass;

namespace mc {

/// 前方宣言
class MyClass2;
/// 前方宣言
export class MyClass3;

/// 公開されるクラス
export class MyClass {
public:
    void func();
    /// MyClass2 を利用する関数
    void call_func(MyClass2 * p);
    /// MyClass3 を利用する関数
    void call_func(MyClass3 * p);
};

} // namespace mc
