/**
 * @file
 * @brief クラス
 */
module;
#include <iostream>
module MyClass3;

namespace mc {

void MyClass3::func()
{
    std::cout << "MyClass3::func()" << std::endl;
}
// MyClass を利用する関数
void MyClass3::call_func(MyClass * p)
{
    p->func(); // NG: LNK2019 未解決の外部シンボル
}

} // namespace mc
