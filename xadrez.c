#include <stdio.h>

void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

void moverBispo(int passos) {
    if (passos == 0) return;

    for (int i = 0; i < 1; i++) { 
        for (int j = 0; j < 1; j++) { 
            printf("Cima Direita\n");
        }
    }

    moverBispo(passos - 1);
}

void moverCavalo() {
    printf("Movimento do Cavalo (2 casas para Cima, 1 para Direita):\n");

    int vertical = 2;
    int horizontal = 1;
    int movimentosRealizados = 0;

    for (int i = 1; i <= vertical; i++) {
        if (i == 1) {
            printf("Cima\n");
            continue;
        }

        if (i == 2) {
            printf("Cima\n");

            for (int j = 1; j <= horizontal; j++) {
                if (j > 1) break;
                printf("Direita\n");
                movimentosRealizados++;
            }
        }
    }
}

int main() {
    printf("Movimento da Torre (5 casas para Direita):\n");
    moverTorre(5);
    printf("\n");

    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    moverBispo(5);
    printf("\n");

    printf("Movimento da Rainha (8 casas para Esquerda):\n");
    moverRainha(8);
    printf("\n");

    moverCavalo();

    return 0;
}
