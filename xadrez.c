// xadrez.c
// Desafio: Movimentando as Peças do Xadrez
// Nível: Novato + Aventureiro
// Autor: Matheus Anderson
// Objetivo: Simular o movimento das peças Torre, Bispo, Rainha e Cavalo
// usando diferentes estruturas de repetição (for, while, do-while e loops aninhados).

#include <stdio.h>

int main() {
    // ==============================
    // Movimento da TORRE (usando for)
    // ==============================
    // A Torre se move em linha reta — horizontal ou vertical.
    // Aqui, simulamos 5 casas para a direita.

    int casas_torre = 5;
    printf("=== Movimento da TORRE ===\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n");

    // ===============================
    // Movimento do BISPO (usando while)
    // ===============================
    // O Bispo se move na diagonal.
    // Simulamos 5 casas na diagonal "Cima e Direita".

    int casas_bispo = 5;
    int i = 1;
    printf("=== Movimento do BISPO ===\n");
    while (i <= casas_bispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }

    printf("\n");

    // =================================
    // Movimento da RAINHA (usando do-while)
    // =================================
    // A Rainha pode se mover em todas as direções.
    // Aqui simulamos 8 casas para a esquerda.

    int casas_rainha = 8;
    int j = 1;
    printf("=== Movimento da RAINHA ===\n");
    do {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= casas_rainha);

    printf("\n");

    // ==========================================
    // Movimento do CAVALO (usando loops aninhados)
    // ==========================================
    // O Cavalo se move em "L": duas casas em uma direção e uma perpendicular.
    // Aqui simulamos duas casas para BAIXO e uma para a ESQUERDA.
    //
    // Estrutura:
    // - Um loop for para as duas casas para baixo.
    // - Um loop while aninhado para o movimento à esquerda.
    //
    // Total de movimentos:
    //   "Baixo", "Baixo", "Esquerda"

    int casas_baixo = 2;
    int casas_esquerda = 1;

    printf("=== Movimento do CAVALO ===\n");

    // Loop principal (for): duas casas para baixo
    for (int x = 1; x <= casas_baixo; x++) {
        printf("Baixo (%d)\n", x);

        // Loop aninhado (while): movimento final para a esquerda
        if (x == casas_baixo) {  // Só move para a esquerda depois de descer as duas casas
            int y = 1;
            while (y <= casas_esquerda) {
                printf("Esquerda (%d)\n", y);
                y++;
            }
        }
    }

    printf("\n");

    // Fim do programa
    printf("Simulação concluída!\n");

    return 0;
}
