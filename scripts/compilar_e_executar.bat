@echo off
echo ========================================
echo    COMPILANDO E EXECUTANDO STOCK PEIXE
echo ========================================
echo.

echo 1. Configurando ambiente...
SET PATH=C:\msys64\mingw64\bin;%PATH%

echo 2. Compilando...
g++ -std=c++17 src/main.cpp -lsfml-graphics -lsfml-window -lsfml-system -o build/StockPeixe.exe

if exist build/StockPeixe.exe (
    echo.
    echo 3. Compilacao bem-sucedida! Executando...
    echo.
    copy libs\*.dll build\
    build\StockPeixe.exe
) else (
    echo.
    echo ERRO: Falha na compilacao!
    echo Verifique se o SFML esta instalado corretamente.
)

echo.
echo Pressione qualquer tecla para sair...
pause > nul
