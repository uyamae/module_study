/**
 * @file
 * @brief クラス
 */
module;
export module MyClass;

namespace mc {

/// 前方宣言
class MyClass2;

/// 公開されるクラス
export class MyClass {
public:
    void func();
    /// MyClass2 を利用する関数
    void call_func(MyClass2 * p);
};

} // namespace mc
