﻿/**
 * @file
 * @brief モジュール実装
 */
module; // グローバルモジュールフラグメント
#include <iostream>
module MyModule;

namespace mm {

// モジュール外に公開する関数
void publicFunc()
{
    std::cout << "publicFunc()" << std::endl;
}

// モジュール外に公開しない関数
void privateFunc()
{
    std::cout << "privateFunc()" << std::endl;
}

} // namespace mm
