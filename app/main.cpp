import MyModule;
//import MyModlue:Partition; // NG: C2143

int main()
{
    mm::publicFunc();
    //mm::privateFunc(); // NG: C2039 privateFunc はmm のメンバーではない // export されていない
    //mm::publicPartitionFunc(); // NG: C2039 // モジュールパーティションがexport されていない
    //mm::privatePartitionFunc(); // NG: C2039

    return 0;
}
