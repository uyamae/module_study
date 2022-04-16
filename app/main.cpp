import MyModule;
//import MyModlue:Partition; // NG: C2143

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

    return 0;
}
