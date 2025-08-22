#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    std::cout << "Iniciando Stock Peixe..." << std::endl;
    
    // Criar uma janela de 800x600 pixels
    sf::RenderWindow janela(sf::VideoMode(800, 600), "Stock Peixe - Teste");
    
    // Centralizar a janela na tela
    janela.setPosition(sf::Vector2i(100, 100));
    
    std::cout << "Janela criada." << std::endl;
    
    // Loop principal do app
    while (janela.isOpen()) {
        // Para processar eventos (cliques, teclas, etc)
        sf::Event evento;
        
        // Verifica se o usuário fechou a janela
        while (janela.pollEvent(evento)) {
            if (evento.type == sf::Event::Closed) {
                std::cout << "Janela fechada." << std::endl;
                janela.close();
            }
        }
        
        // Limpa a tela com a cor branca
        janela.clear(sf::Color::White);
        
        // Aqui vamos desenhar coisas depois
        
        // Mostrar tudo na tela
        janela.display();
    }
    
    std::cout << "Programa encerrado." << std::endl;
    return 0;
}
