#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linha 5
#define coluna 5

void mostrarMatriz(int matriz[5][5]) {
    int i,j;
    for (int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int verificaMaior(int matriz[5][5]) {
    int maior = matriz[0][0];
    for (int i = 0; i < linha; i++) {
        for (int j = 0; j < coluna; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }
    return maior;
}

int main() {
    srand(time(NULL));
    int matriz[linha][coluna];
    for (int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++){
            matriz[i][j] = rand() % 100+1; 
        }
    }

    int maior = verificaMaior(matriz);
    mostrarMatriz(matriz);
    printf("O maior número é: %d", maior);
}

