#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};

    // Navio horizontal
    for(int i = 1; i <= 4; i++) {
        tabuleiro[2][i] = 3;
    }

    // Navio vertical
    for(int i = 4; i <= 7; i++) {
        tabuleiro[i][6] = 3;
    }

    // Navio diagonal principal
    for(int i = 0; i < 4; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio diagonal secundária
    for(int i = 0; i < 4; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    printf("Tabuleiro Batalha Naval:\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
