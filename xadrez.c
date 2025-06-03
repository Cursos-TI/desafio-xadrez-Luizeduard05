#include <stdio.h>

int main() {
    int i;
    int movimentoTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    int j = 1;
    int movimentoBispo = 5;
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    while (j <= movimentoBispo) {
        printf("Cima Direita\n");
        j++;
    }
    printf("\n");

    int k = 1;
    int movimentoRainha = 8;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= movimentoRainha);
    printf("\n");

    int movimentoVertical = 2;
    int movimentoHorizontal = 1;
    int m;

    printf("Movimento do Cavalo (2 casas para Baixo, 1 casa para Esquerda):\n");

    for (m = 1; m <= movimentoVertical; m++) {
        printf("Baixo\n");

        int n = 1;
        while (n <= movimentoHorizontal && m == movimentoVertical) {
            printf("Esquerda\n");
            n++;
        }
    }

    return 0;
}
