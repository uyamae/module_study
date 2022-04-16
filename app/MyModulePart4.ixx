/**
 * @file
 * @brief MyModule のパーティション
 */
export module MyModule:Partition4;

namespace mm {

/// パーティション外に公開する関数
export void publicPartialFunc4();

/// パーティション外に公開しない関数
void privatePartialFunc4();

} // namespace mm
