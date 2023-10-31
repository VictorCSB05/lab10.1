#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define linha 3
#define coluna 3

void mostrarMatriz(int matriz[3][3]) {
    int i, j;
    for (i = 0; i < linha; i++) {
        for(j = 0; j < coluna; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int traço(int matriz[3][3]) {
    int soma = matriz[0][0] + matriz[1][1] + matriz[2][2];
    return soma;
}

int main() {
    srand(time(NULL));
    int matriz[linha][coluna];
    for (int i = 0; i < linha; i++) {
        for(int j = 0; j < coluna; j++){
            matriz[i][j] = rand() % 100+1; 
        }
    }

    mostrarMatriz(matriz);
    int soma = traço(matriz);
    printf("A soma dos valores da diagonal secundária é: %d", soma);

}
