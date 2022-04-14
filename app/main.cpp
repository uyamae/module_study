import MyModule;

int main()
{
    mm::publicFunc();
    //mm::privateFunc(); // NG: export されていない

    return 0;
}
