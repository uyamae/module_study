import MyModule;
//import MyModlue:Partition; // NG: C2143
import MyClass2;

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

    return 0;
}
