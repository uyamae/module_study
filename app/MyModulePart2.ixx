/**
 * @file
 * @brief MyModule のパーティション
 */
export module MyModule:Partition2;

namespace mm {

/// パーティション外に公開する関数
export void publicPartialFunc2();

/// パーティション外に公開しない関数
void privatePartialFunc2();

} // namespace mm
