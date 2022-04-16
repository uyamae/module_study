/**
 * @file
 * @brief MyModule のパーティション
 */
export module MyModule:Partition;

namespace mm {

/// パーティション外に公開する関数
export void publicPartialFunc();

/// パーティション外に公開しない関数
void privatePartialFunc();

} // namespace mm
