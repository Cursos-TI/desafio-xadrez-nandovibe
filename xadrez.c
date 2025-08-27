#include <stdio.h>

/*
  Desafio: Movimentando as Peças do Xadrez - Nível Mestre

  - Torre   : função recursiva (5 casas para a Direita)
  - Bispo   : função recursiva (5 casas em diagonal para Cima + Direita)
              + loops aninhados (vertical + horizontal)
  - Rainha  : função recursiva (8 casas para a Esquerda)
  - Cavalo  : loops aninhados com múltiplas variáveis e condições
              (movimento em "L": 2 casas para Cima + 1 casa para a Direita)

  Saída segue exatamente o padrão:
    printf("Cima\n");
    printf("Baixo\n");
    printf("Esquerda\n");
    printf("Direita\n");
*/

// ------------------------
// Função recursiva: Torre
// ------------------------
void moverTorre(int casas) {
    if (casas == 0) return;        // condição de parada
    printf("Direita\n");
    moverTorre(casas - 1);         // chamada recursiva
}

// ------------------------
// Função recursiva: Bispo
// ------------------------
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casas - 1);
}

// ------------------------
// Função recursiva: Rainha
// ------------------------
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// ------------------------
// Função principal
// ------------------------
int main(void) {
    // Entradas definidas no código
    const int casasTorre  = 5;
    const int casasBispo  = 5;
    const int casasRainha = 8;

    // ------------------------
    // Torre (recursividade)
    // ------------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // ------------------------
    // Bispo (recursividade)
    // ------------------------
    printf("Movimento do Bispo (recursividade):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // ------------------------
    // Bispo (loops aninhados)
    // ------------------------
    printf("Movimento do Bispo (loops aninhados):\n");
    for (int v = 0; v < casasBispo; v++) {     // loop vertical
        for (int h = 0; h < 1; h++) {          // loop horizontal interno
            printf("Cima\n");
            printf("Direita\n");
        }
    }
    printf("\n");

    // ------------------------
    // Rainha (recursividade)
    // ------------------------
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // ------------------------
    // Cavalo (loops aninhados + múltiplas variáveis e condições)
    // ------------------------
    printf("Movimento do Cavalo:\n");

    for (int i = 0; i < 2; i++) {         // 2 movimentos para cima
        for (int j = 0; j < 1; j++) {     // controle adicional
            if (i < 2) {
                printf("Cima\n");
            }
        }
    }

    for (int k = 0; k < 1; k++) {         // 1 movimento para a direita
        for (int m = 0; m < 2; m++) {     // loop interno só para ilustrar complexidade
            if (m == 1) {
                printf("Direita\n");
                break; // encerra no passo certo
            } else {
                continue; // pula a primeira iteração
            }
        }
    }

    return 0;
}