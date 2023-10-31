#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrarMatriz(int matriz[100][100], int linha, int coluna) {
    int i, j;
    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

bool matrizdiagonal(int matriz[100][100], int linha, int coluna) {
    int i, j;
    if (linha == coluna) {
        return true;
    }
    return false;   
}

int main() {
    srand(time(NULL));
    int n, m;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    int matriz[100][100];
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    printf("Matriz :\n");
    mostrarMatriz(matriz, n, m);

    if (matrizdiagonal(matriz, n, m)) {
        printf("A matriz é diagonal.\n");
    } else {
        printf("A matriz não é diagonal.\n");
    }

}
