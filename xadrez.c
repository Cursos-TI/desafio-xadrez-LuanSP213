#include <stdio.h>

int main() {
    // -------------------------------
    // Simulação do movimento da Torre
    // -------------------------------
    int movimentoTorre = 5; // Número de casas que a torre vai se mover
    int i;

    printf("Movimento da Torre:\n");
    // Utiliza a estrutura 'for'
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }

    // -------------------------------
    // Simulação do movimento do Bispo
    // -------------------------------
    int movimentoBispo = 5; // Número de casas que o bispo vai se mover
    int j = 1;

    printf("\nMovimento do Bispo:\n");
    // Utiliza a estrutura 'while'
    while (j <= movimentoBispo) {
        printf("Cima Direita\n");
        j++;
    }

    // --------------------------------
    // Simulação do movimento da Rainha
    // --------------------------------
    int movimentoRainha = 8; // Número de casas que a rainha vai se mover
    int k = 1;

    printf("\nMovimento da Rainha:\n");
    // Utiliza a estrutura 'do-while'
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= movimentoRainha);

    return 0;
}
