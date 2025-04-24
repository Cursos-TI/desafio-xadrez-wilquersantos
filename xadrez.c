#include <stdio.h>

int main() {
    // movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    
    // movimento do Bispo (5 casas na diagonal superior direita) usando while
    printf("\nMovimento do Bispo (5 casas na diagonal cima/direita):\n");
    int casasBispo = 0;
    while (casasBispo < 5) {
        printf("Cima, Direita\n");
        casasBispo++;
    }
    
    //movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    int casasRainha = 0;
    do {
        printf("Esquerda\n");
        casasRainha++;
    } while (casasRainha < 8);
    
    return 0;
}