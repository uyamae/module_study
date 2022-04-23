import MyModule;
//import MyModlue:Partition; // NG: C2143
import MyClass2;
import MyClass3;
import MyClass4;

int main()
{
    mm::publicFunc();
    //mm::privateFunc(); // NG: C2039 privateFunc はmm のメンバーではない // export されていない
    //mm::publicPartitionFunc(); // NG: C2039 // モジュールパーティションがexport されていない
    //mm::privatePartitionFunc(); // NG: C2039
    mm::publicPartialFunc3();
    //mm::privatePartialFunc3(); // NG: C2039, C3861 識別子が見つからない
    //mm::publicPartialFunc4();
    //mm::privatePartialFunc4();
    mm::publicPartialFunc5();
    //mm::privatePartialFunc5(); // NG: C2039, C3861 識別子が見つからない
    mm::publicFunc2();
    //mm::privateFunc2(); // NG: C2039, C3861 識別子が見つからない

    mc::MyClass c;
    mc::MyClass2 c2;
    c.func();
    //c.call_func(&c2); // NG: C2664 引数をmc::MyClass2 * からmc::MyClass2 * に変換できない
    c2.func();
    c2.call_func(&c);

    mc::MyClass3 c3;
    c3.func();
    c3.call_func(&c);
    c.call_func(&c3);

    //mc::MyClass4 c4; // NG: C2079 未定義のclass mc::MyClass4
    //c4.func(); // NG: C2027 認識できない型mc::MyClass4

    //auto pc4 = mc::get_myclass4(); // NG: C2338 can't delete an incomplete type
    //pc4->func(); // NG: C2039 func はpc4 のメンバーではない

    mc::MyClass4b c4b;
    c4b.func();

    auto pc4b = mc::get_myclass4b();
    pc4b->func();

    return 0;
}
