#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    std::cout << "Iniciando Stock Peixe..." << std::endl;
    
    // Criar uma janela de 800x600 pixels
    sf::RenderWindow janela(sf::VideoMode(800, 600), "Stock Peixe");
    
    // Centralizar a janela na tela
    janela.setPosition(sf::Vector2i(550, 250));

    //Cores do tabuleiro
    sf::Color cor1(240, 217, 181); // bege claro
    sf::Color cor2(181, 136, 99);  // marrom
    sf::Color cor3(100, 200, 255, 160);  // cor do destaque
    
    // Loop principal do app
    while (janela.isOpen()) {
        // Para processar eventos (cliques, teclas, etc)
        sf::Event evento;
        
        // Verifica se o usuário fechou a janela
        while (janela.pollEvent(evento)) {
            if (evento.type == sf::Event::Closed) {
                janela.close();
            }
            if (evento.type == sf::Event::MouseButtonPressed) {
                if (evento.mouseButton.button == sf::Mouse::Left) {
                    sf::Vector2i posicaoMouse = sf::Mouse::getPosition(janela);

                    // Calcula o tamanho do tabuleiro e o tamanho de cada quadrado
                    sf::Vector2u tamanhoJanela = janela.getSize();
                    float tamanhoTabuleiro = std::min((tamanhoJanela.x-50), (tamanhoJanela.y-50));
                    float larguraQuadrado = tamanhoTabuleiro / 8.0f;
                    float alturaQuadrado = tamanhoTabuleiro / 8.0f;

                    int coluna = posicaoMouse.x / larguraQuadrado;
                    int linha = posicaoMouse.y / alturaQuadrado;

                    if (coluna >= 0 && coluna < 8 && linha >= 0 && linha < 8) {
                        int indice = linha * 8 + coluna;
                        std::cout << "Clique na posicao: " << coluna << ", " << linha << std::endl;
                    }
                }
            }
        }
        
        // Limpa a tela com a cor preta
        janela.clear(sf::Color::Black);
        
        // Mostrar tudo na tela
        janela.display();
    }
    
    std::cout << "App encerrado." << std::endl;

    return 0;
}
