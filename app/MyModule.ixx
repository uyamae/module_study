/**
 * @file
 * @brief プライマリーモジュールインターフェース
 */
export module MyModule;
export import :Partition3;
import :Partition4;
export import :Partition5;

namespace mm {

/// モジュール外に公開する関数
export void publicFunc();

/// モジュール外に公開しない関数
void privateFunc();

/// モジュール外に公開する関数
export void publicFunc2();

/// モジュール外に公開しない関数
void privateFunc2();

/// モジュール外に公開するクラス宣言
export class MyClass;

} // namespace mm
