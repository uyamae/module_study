/**
 * @file
 * @brief MyModule のパーティション
 */
export module MyModule:Partition5;

namespace mm {

/// パーティション外に公開する関数
export void publicPartialFunc5();

/// パーティション外に公開しない関数
void privatePartialFunc5();

} // namespace mm
