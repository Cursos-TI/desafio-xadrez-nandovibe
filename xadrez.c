#include <stdio.h>

/*
  Desafio: Movimentando as Peças do Xadrez

  - Torre  : 5 casas para a Direita (usar FOR)
  - Bispo  : 5 casas na diagonal para Cima + Direita (usar WHILE)
  - Rainha : 8 casas para a Esquerda (usar DO-WHILE)
  - Cavalo : 2 casas para Baixo + 1 para a Esquerda (usar loops aninhados)

  Regras de saída:
    printf("Cima\n");
    printf("Baixo\n");
    printf("Esquerda\n");
    printf("Direita\n");
    printf("Cima Esquerda\n");
    printf("Cima Direita\n");
*/

int main(void) {
    // ----- Entrada de dados (definidas no código) -----
    const int casasTorre   = 5; // Torre: 5 casas à Direita
    const int casasBispo   = 5; // Bispo: 5 casas em Cima + Direita
    const int casasRainha  = 8; // Rainha: 8 casas à Esquerda
    const int casasCavaloB = 2; // Cavalo: 2 casas para Baixo
    const int casasCavaloE = 1; // Cavalo: 1 casa para a Esquerda

    // ---------------------------------------------------
    // Movimentação da Torre (FOR)
    // ---------------------------------------------------
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ---------------------------------------------------
    // Movimentação do Bispo (WHILE)
    // ---------------------------------------------------
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < casasBispo) {
        printf("Cima\n");
        printf("Direita\n");
        j++;
    }
    printf("\n");

    // ---------------------------------------------------
    // Movimentação da Rainha (DO-WHILE)
    // ---------------------------------------------------
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);
    printf("\n");

    // ---------------------------------------------------
    // Movimentação do Cavalo (FOR + WHILE ANINHADOS)
    // ---------------------------------------------------
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < casasCavaloB; i++) {
        printf("Baixo\n");
    }

    int l = 0;
    while (l < casasCavaloE) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}