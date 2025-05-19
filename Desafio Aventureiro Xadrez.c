#include <stdio.h>

int main() {
    // Movimento da Torre - 5 casas para a Direita
    // Usando estrutura de repetição FOR
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do Bispo - 5 casas na diagonal para Cima e Direita
    // Usando estrutura de repetição WHILE
    printf("Movimento do Bispo (5 casas na diagonal para Cima e Direita):\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // Movimento da Rainha - 8 casas para a Esquerda
    // Usando estrutura de repetição DO-WHILE
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    printf("\n");

    // Movimento do Cavalo - duas casas para baixo e uma para a esquerda
    // Usando loops aninhados: FOR (para casas para baixo) + WHILE (para a esquerda)
    printf("Movimento do Cavalo (2 casas para Baixo e 1 para Esquerda):\n");

    int passosParaBaixo = 2;
    int passosParaEsquerda = 1;

    // Primeiro, mover para baixo (duas casas)
    for (int i = 0; i < passosParaBaixo; i++) {
        printf("Baixo\n");
        
        // Após a segunda casa para baixo, fazer o movimento para esquerda
        if (i == passosParaBaixo - 1) {
            int cont = 0;
            while (cont < passosParaEsquerda) {
                printf("Esquerda\n");
                cont++;
            }
        }
    }

    return 0;
}