@echo off
echo Compilando Stock Peixe...
SET PATH=C:\msys64\mingw64\bin;%PATH%
g++ -std=c++17 src/main.cpp -lsfml-graphics -lsfml-window -lsfml-system -o build/StockPeixe.exe

if exist build/StockPeixe.exe (
    echo Compilacao bem-sucedida!
    copy libs\*.dll build\
) else (
    echo Erro na compilacao!
)
