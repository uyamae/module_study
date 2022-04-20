/**
 * @file
 * @brief クラス
 */
module;
export module MyClass3;
export import MyClass;

namespace mc {

/// 公開されるクラス
export class MyClass3 {
public:
    void func();
    /// MyClass を利用する関数
    void call_func(MyClass * p);
};

} // namespace mc
