#include <stdio.h>

// Função recursiva para movimentar a Torre (para Direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Função recursiva para movimentar a Rainha (para Esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// Função recursiva para o Bispo (movimento diagonal Cima Direita)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1); // chamada recursiva
}

// Função com loops aninhados para simular movimento vertical e horizontal do Bispo
void moverBispoComLoops(int casasVerticais, int casasHorizontais) {
    for (int i = 0; i < casasVerticais; i++) {
        for (int j = 0; j < casasHorizontais; j++) {
            printf("Cima Direita\n");
        }
    }
}

// Função para o movimento complexo do Cavalo (2 casas para cima, 1 para direita)
void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para Cima e 1 para Direita):\n");
    
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int i = 0; i < 3; i++) { // Loop de controle
        int cima = 0;
        int direita = 0;

        while (cima < movimentosVerticais || direita < movimentosHorizontais) {
            if (cima < movimentosVerticais) {
                printf("Cima\n");
                cima++;
                continue;
            }

            if (direita < movimentosHorizontais) {
                printf("Direita\n");
                break;
            }
        }
        break; // Executar apenas uma vez para o movimento em "L"
    }
}

int main() {
    // Torre
    printf("Movimento da Torre (5 casas para a Direita):\n");
    moverTorre(5);

    printf("\n");

    // Bispo com recursividade
    printf("Movimento do Bispo com Recursividade (5 casas na diagonal Cima Direita):\n");
    moverBispoRecursivo(5);

    printf("\n");

    // Bispo com loops aninhados
    printf("Movimento do Bispo com Loops Aninhados (2 verticais x 2 horizontais):\n");
    moverBispoComLoops(2, 2);

    printf("\n");

    // Rainha
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    moverRainha(8);

    printf("\n");

    // Cavalo com loops complexos
    moverCavalo();

    return 0;
}