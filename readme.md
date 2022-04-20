C++ module study
====================

C++ のモジュールについてテストして調べるプロジェクトです。

環境はMSVC(Visual Studio 2019) です。

テスト内容
--------------------

- MyModule
  - プライマリーモジュールインターフェースで関数の宣言
  - モジュール実装ユニットで関数の定義
  - main.cpp で関数の呼び出し確認
- MyModulePart
  - MyModule のパーティション:Partition
  - import しなければMyModule.cpp からも使えない
  - main.cpp から直接インポートは出来ない
- MyModluePart2
  - MyModule のパーティション:Partition2
  - MyModule.cpp でインポート
  - export していないprivatePartialFunc2() がMyModlue から利用可能になっている?
- MyModulePart3
  - MyModule のパーティション:Partition3
  - MyModule.ixx でエクスポート付きインポート
  - MyModule.cpp でexport していないprivatePartialFunc3() は利用できない
  - main.cpp でもprivatePartialFunc3() は利用できない
- MyModulePart4
  - MyModule のパーティション:Partition4
  - MyModule.ixx でインポート
  - MyModule.cpp でexport していないprivatePartialFunc4() は利用できない
  - main.cpp でもprivatePartialFunc4() は利用できない
- MyModulePart5
  - MyModule のパーティション:Partition5
  - MyModule.ixx でエクスポート付きインポート
  - MyModule.cpp でインポート
  - MyModule.cpp でexport していないprivatePartialFunc4() は利用できない
  - main.cpp でもprivatePartialFunc4() は利用できない
- MyModulePart2 ~ MyModulePart5
  - export していない関数が、MyModule.cpp だけでimport したパーティションのものは利用できている
- MyModulePart2 でPartition3 ~ Partition5 の関数呼び出し
  - 何もインポートしていない
  - 関数はどれも利用できない
- MyModule2.cpp
  - MyModule モジュールの実装ユニット
  - MyModule.ixx で宣言した関数をMyModule.cpp, MyModule2.cpp に分けて実装
  - main.cpp から利用可能
  - MyModule2.cpp で定義した関数をMyModule.cpp で利用する場合、MyModule.cpp で関数の前方宣言があれば可能
- MyModule.ixx, MyClass
  - MyModule.ixx でエクスポート付きクラス宣言, MyModule.cpp でクラス定義
  - MyModule2.cpp ではMyClass は未定義扱いになる
- マクロ定義
  - MyModule.ixx でマクロMY_MODULE_VERSION を定義
  - MyModule.ixx からはMY_MODULE_VERSION を利用できる
  - MyModule.cpp からはMY_MODULE_VERSION を利用できない

- MyClass, MyClass2
  - 相互参照するクラス
  - MyClass.ixx ではMyClass2 を前方宣言, MyClass.cpp でMyClass2 をインポート
  - MyClass2.ixx ではMyClass をインポート
  - MyClass からMyClass2::func() の呼び出しはリンク時に未解決の外部シンボルとしてエラーになる
  - MyModule.cpp やmain.cpp でMyClass, MyClass2 をインポートするとMyClass::call_func() にMyClass2 のインスタンスを渡して呼び出すのが型の不一致のエラーとなる
    - MyClass.ixx でのMyClass2 の前方宣言とMyClass2.ixx のMyClass2 の定義が別扱いになっている?
- MyClass3
  - MyClass と相互参照するクラス
  - MyClass.ixx ではMyClass3 をexport 付き前方宣言, MyClass.cpp でMyClass3 をインポート
  - MyClass3.ixx ではMyClass をインポート
  - MyClass::call_func(MyClass3 *) は問題なくコンパイル、リンク出来る
  - クラスの前方宣言にはexport が必要
