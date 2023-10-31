#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linha 3
#define coluna 3

void mostrarMatriz(int matrizA[linha][coluna], int matrizB[linha][coluna], int matrizC[linha][coluna]) {
    int i, j;
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("%2d ", matrizA[i][j]);
        }
        printf("  ");
        for (j = 0; j < coluna; j++) {
            printf("%2d ", matrizB[i][j]);
        }
        printf("  ");
        for (j = 0; j < coluna; j++) {
            printf("%2d ", matrizC[i][j]);
        }
        printf("\n");
    }
}

void matrizc(int matrizA[linha][coluna], int matrizB[linha][coluna], int matrizC[linha][coluna]) {
    int i, j;

    for (i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

int main() {
    srand(time(NULL));
    int matrizA[linha][coluna];
    int matrizB[linha][coluna];
    int matrizC[linha][coluna];
    int i, j;

    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            matrizA[i][j] = rand() % 100 + 1;
            matrizB[i][j] = rand() % 100 + 1;
        }
    }

    printf("Matriz A e B :\n");
    mostrarMatriz(matrizA, matrizB, matrizC);

    matrizc(matrizA, matrizB, matrizC);

    printf("Matriz C (soma de A e B):\n");
    mostrarMatriz(matrizA, matrizB, matrizC);

}