#include <stdio.h>

int main() {
    // Tabuleiro 10x10
    int tabuleiro[10][10] = {0};

    // Navios 
    int navio_horizontal[3] = {3, 3, 3}; // Navio horizontal
    int navio_vertical[3] = {3, 3, 3}; // Navio vertical
    int navio_diagonal1[3] = {3, 3, 3}; // Navio diagonal
    int navio_diagonal2[3] = {3, 3, 3}; // Navio diagonal

    // Coordenadas iniciais
    int x_horizontal = 3, y_horizontal = 3; // Para o navio horizontal
    int x_vertical = 6, y_vertical = 1;     // Para o navio vertical
    int x_diagonal1 = 5, y_diagonal1 = 3;     // Para o navio diagonal
    int x_diagonal2 = 0, y_diagonal2 = 9;     // Para o navio diagonal

    // Posicionando o navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_horizontal][y_horizontal + i] = navio_horizontal[i]; 
    }

    // Posicionando o navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_vertical + i][y_vertical] = navio_vertical[i]; 
    }

    // Posicionando o navio diagonal
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_diagonal1 + i][y_diagonal1 + i] = navio_diagonal1[i]; // Movimento diagonal para baixo e para frente
    }

    
    // Posicionando o navio diagonal
    for (int i = 0; i < 3; i++) {
        tabuleiro[x_diagonal2 + i][y_diagonal2 - i] = navio_diagonal2[i]; // Movimento diagonal para baixo e para trás 
    }


    // Exibindo o tabuleiro
    printf("Tabuleiro com os navios posicionados:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}