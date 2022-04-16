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
- MyModluePart
  - MyModule のパーティション:Partition2
  - MyModule.cpp でインポート
  - export していないprivatePartialFunc2() がMyModlue から利用可能担っている?
