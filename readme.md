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
