#include <stdio.h>

/*
  Desafio: Movimentando as Peças do Xadrez (nível novato)

  - Torre  : 5 casas para a Direita (usar FOR)
  - Bispo  : 5 casas na diagonal para Cima Direita (usar WHILE)
  - Rainha : 8 casas para a Esquerda (usar DO-WHILE)

  Regras de saída:
    printf("Cima\n");
    printf("Baixo\n");
    printf("Esquerda\n");
    printf("Direita\n");
    printf("Cima Esquerda\n");
    printf("Cima Direita\n");  // utilizado para o Bispo neste desafio
*/

int main(void) {
    // ----- Entrada de dados (definidas no código) -----
    const int casasTorre  = 5;  // Torre: 5 casas à Direita
    const int casasBispo  = 5;  // Bispo: 5 casas em Cima Direita
    const int casasRainha = 8;  // Rainha: 8 casas à Esquerda

    // ---------------------------------------------------
    // Movimentação da Torre (FOR) - linha reta horizontal
    // ---------------------------------------------------
    // A cada iteração, a Torre anda 1 casa para a Direita.
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ---------------------------------------------------
    // Movimentação do Bispo (WHILE) - diagonal
    // ---------------------------------------------------
    // Para representar a diagonal, imprimimos a combinação de duas direções.
    // Aqui: "Cima Direita" (sem vírgula, conforme padrão solicitado).
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < casasBispo) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    // ---------------------------------------------------
    // Movimentação da Rainha (DO-WHILE) - qualquer direção
    // ---------------------------------------------------
    // Neste desafio: 8 casas para a Esquerda.
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);

    return 0;
}