#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrarMatriz(int matrizA[100][100], int matrizB[100][100], int matrizC[100][100], int linha, int coluna) {
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

void matrizc(int matrizA[100][100], int matrizB[100][100], int matrizC[100][100], int linha, int coluna) {
    int i, j;

    for (i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            matrizC[i][j] = matrizA[i][j] * matrizB[i][j];
        }
    }
}

int main() {
    srand(time(NULL));
    int n, m, p;

    printf("digite o valor de n: ");
    scanf("%d", &n);

    printf("digite o valor de m: ");
    scanf("%d", &m);

    printf("digite o valor de p: ");
    scanf("%d", &p);

    int matrizA[100][100];
    int matrizB[100][100];
    int matrizC[100][100];
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            matrizA[i][j] = rand() % 100 + 1;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            matrizB[i][j] = rand() % 100 + 1;
        }
    }

    printf("matriz A e B :\n");
    mostrarMatriz(matrizA, matrizB, matrizC, n, m);

    matrizc(matrizA, matrizB, matrizC, n, m);

    printf("matriz C (soma de A e B):\n");
    mostrarMatriz(matrizA, matrizB, matrizC, m, p);

}
