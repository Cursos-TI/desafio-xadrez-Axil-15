#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Constantes para o número de casas que cada peça deve se mover
    const int movimentosTorre = 5;
    const int movimentosBispo = 5;
    const int movimentosRainha = 8;

    // Implementação de Movimentação da Torre (para a direita)
    // Usamos um loop for para repetir a ação 5 vezes
    printf("Movimentação da Torre (5 casas para a Direita):\n");
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    // Implementação de Movimentação do Bispo (na diagonal cima-direita)
    // Usamos um loop while para repetir a movimentação 5 vezes
    printf("\nMovimentação do Bispo (5 casas na Diagonal - Cima Direita):\n");
    int contadorBispo = 0;
    while (contadorBispo < movimentosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // Implementação de Movimentação da Rainha (para a esquerda)
    // Usamos um loop do-while para repetir a ação 8 vezes
    printf("\nMovimentação da Rainha (8 casas para a Esquerda):\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);

    return 0;
}

