/**
 * @file
 * @brief クラス
 */
module;
#include <iostream>
module MyClass;
import MyClass2;

namespace mc {

void MyClass::func()
{
    std::cout << "MyClass::func()" << std::endl;
}
// MyClass2 を利用する関数
void MyClass::call_func(MyClass2 * p)
{
    //p->func(); // NG: LNK2019 未解決の外部シンボル
}

} // namespace mc
