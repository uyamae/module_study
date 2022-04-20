/**
 * @file
 * @brief クラス
 */
module;
#include <iostream>
module MyClass2;

namespace mc {

void MyClass2::func()
{
    std::cout << "MyClass2::func()" << std::endl;
}
// MyClass を利用する関数
void MyClass2::call_func(MyClass * p)
{
    p->func();
}

} // namespace mc
