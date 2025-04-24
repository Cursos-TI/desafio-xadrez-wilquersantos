#include <stdio.h>

/* Configurações dos movimentos */
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8
#define PASSOS_CAVALO_CIMA 2
#define PASSOS_CAVALO_DIREITA 1

/* Declaração das funções de movimento */
void movimentarTorre(int passos_restantes);
void movimentarBispo(int passos_restantes);
void movimentarRainha(int passos_restantes);
void movimentarCavalo();

int main() {
    /* Simulação do movimento da Torre */
    printf("Torre movendo %d casas para a direita:\n", MOVIMENTOS_TORRE);
    movimentarTorre(MOVIMENTOS_TORRE);
    
    /* Simulação do movimento do Bispo */
    printf("\nBispo movendo %d casas na diagonal (cima/direita):\n", MOVIMENTOS_BISPO);
    movimentarBispo(MOVIMENTOS_BISPO);
    
    /* Simulação do movimento da Rainha */
    printf("\nRainha movendo %d casas para a esquerda:\n", MOVIMENTOS_RAINHA);
    movimentarRainha(MOVIMENTOS_RAINHA);
    
    /* Simulação do movimento do Cavalo */
    printf("\nCavalo movendo em L (%d para cima e %d para direita):\n", 
           PASSOS_CAVALO_CIMA, PASSOS_CAVALO_DIREITA);
    movimentarCavalo();
    
    return 0;
}

/* Função recursiva para movimento da Torre */
void movimentarTorre(int passos_restantes) {
    // Condição de parada da recursão
    if (passos_restantes <= 0) return;
    
    printf("Direita\n");
    // Chamada recursiva com um passo a menos
    movimentarTorre(passos_restantes - 1);
}

/* Função recursiva para movimento do Bispo */
void movimentarBispo(int passos_restantes) {
    // Condição de parada da recursão
    if (passos_restantes <= 0) return;
    
    // Cada movimento do bispo é uma diagonal
    printf("Cima, Direita\n");
    
    // Chamada recursiva com um passo a menos
    movimentarBispo(passos_restantes - 1);
}

/* Função recursiva para movimento da Rainha */
void movimentarRainha(int passos_restantes) {
    // Condição de parada da recursão
    if (passos_restantes <= 0) return;
    
    printf("Esquerda\n");
    // Chamada recursiva com um passo a menos
    movimentarRainha(passos_restantes - 1);
}

/* Função para movimento do Cavalo usando loops aninhados */
void movimentarCavalo() {
    /* Primeira parte do L: movimento vertical (para cima) */
    for (int passo_cima = 0; passo_cima < PASSOS_CAVALO_CIMA; passo_cima++) {
        printf("Cima\n");
    }
    
    /* Segunda parte do L: movimento horizontal (para direita) */
    for (int passo_direita = 0; passo_direita < PASSOS_CAVALO_DIREITA; passo_direita++) {
        printf("Direita\n");
    }
}