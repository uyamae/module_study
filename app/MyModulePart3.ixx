/**
 * @file
 * @brief MyModule のパーティション
 */
export module MyModule:Partition3;

namespace mm {

/// パーティション外に公開する関数
export void publicPartialFunc3();

/// パーティション外に公開しない関数
void privatePartialFunc3();

} // namespace mm
