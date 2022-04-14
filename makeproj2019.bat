@echo off
cd /d %~dp0

if not exist build2019 mkdir build2019
cd build2019

cmake .. -G"Visual Studio 16 2019"
