cmake_minimum_required(VERSION 3.10)
project(StockPeixe)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Configuração para MSYS2/MinGW-w64
set(SFML_INCLUDE_DIR "C:/msys64/mingw64/include")
set(SFML_LIBRARY_DIR "C:/msys64/mingw64/lib")

# Arquivos fonte (por enquanto só o main.cpp)
set(ARQUIVOS_FONTE
    src/main.cpp
)

# Criar executável
add_executable(StockPeixe ${ARQUIVOS_FONTE})

# Incluir diretórios
target_include_directories(StockPeixe PRIVATE src)
target_include_directories(StockPeixe PRIVATE ${SFML_INCLUDE_DIR})

# Linkar com SFML
target_link_directories(StockPeixe PRIVATE ${SFML_LIBRARY_DIR})
target_link_libraries(StockPeixe sfml-graphics sfml-window sfml-system)
