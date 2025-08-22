# Stock Peixe - Chess Engine

Uma engine de xadrez desenvolvida em C++ usando SFML para interface gráfica.

## Sobre o Projeto

Este é um projeto educacional para aprender C++ e desenvolvimento de jogos. O objetivo é criar uma engine de xadrez completa com interface gráfica interativa.

## Estrutura do Projeto

```
Stock-Peixe/
├── src/                    # Código fonte
│   ├── main.cpp           # Arquivo principal
│   ├── Peca.h            # Cabeçalho da classe Peça
│   ├── Peca.cpp          # Implementação da classe Peça
│   ├── Tabuleiro.h       # Cabeçalho da classe Tabuleiro
│   └── Tabuleiro.cpp     # Implementação da classe Tabuleiro
├── assets/               # Recursos (imagens, sons, etc.)
├── build/                # Arquivos de compilação e executável
├── scripts/              # Scripts de compilação
│   ├── compilar.bat      # Script para compilar apenas
│   └── compilar_e_executar.bat # Script para compilar e executar
├── libs/                 # Bibliotecas e DLLs
├── CMakeLists.txt        # Configuração do CMake
├── run.bat              # Script principal para executar
└── README.md           # Este arquivo
```

## Pré-requisitos

- **MinGW-w64** (via MSYS2)
- **SFML 2.6.1** (instalado via MSYS2)
- **CMake** (versão 3.10 ou superior)

## Como Executar

### Opção 1: Script Principal (Recomendado)
```bash
run.bat
```

### Opção 2: Scripts Específicos
```bash
# Apenas compilar
scripts\compilar.bat

# Compilar e executar
scripts\compilar_e_executar.bat
```

### Opção 3: Comandos Manuais
```bash
# Configurar ambiente
SET PATH=C:\msys64\mingw64\bin;%PATH%

# Compilar
g++ -std=c++17 src/main.cpp -lsfml-graphics -lsfml-window -lsfml-system -o build/StockPeixe.exe

# Executar
build\StockPeixe.exe
```

## Instalação do Ambiente

### 1. Instalar MSYS2
1. Baixe em: https://www.msys2.org/
2. Instale em `C:\msys64`

### 2. Instalar SFML via MSYS2
```bash
# Abrir MSYS2 MinGW x64
pacman -Syu
pacman -S mingw-w64-x86_64-gcc
pacman -S mingw-w64-x86_64-cmake
pacman -S mingw-w64-x86_64-sfml
```

### 3. Configurar PATH
Adicione `C:\msys64\mingw64\bin` ao PATH do sistema.

## Funcionalidades Planejadas

- [x] Estrutura básica do projeto
- [x] Ambiente de desenvolvimento configurado
- [x] Interface gráfica básica funcionando
- [ ] Desenhar tabuleiro de xadrez
- [ ] Implementar classe Peça
- [ ] Implementar classe Tabuleiro
- [ ] Movimentação das peças
- [ ] Validação de movimentos
- [ ] Lógica do jogo
- [ ] Engine de IA

## Desenvolvimento

Este projeto está sendo desenvolvido passo a passo, com foco em aprendizado e compreensão de cada conceito.
