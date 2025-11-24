#include <stdio.h>
#include <stdlib.h>

void perkalian(int **matriksA, int **matriksB, int **hasil, int ordo) {
    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j < ordo; j++) {
            hasil[i][j] = 0;
            for(int k = 0; k < ordo; k++) {
                hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }
}

int main() {
    int ordo;
    scanf("%d", &ordo);

    int **matriksA = (int **)malloc(sizeof(int *) * ordo);
    int **matriksB = (int **)malloc(sizeof(int *) * ordo);
    int **hasil = (int **)malloc(sizeof(int *) * ordo);
    for (int i = 0; i < ordo; i++) matriksA[i] = (int *)malloc(ordo * sizeof(int));
    for (int i = 0; i < ordo; i++) matriksB[i] = (int *)malloc(ordo * sizeof(int));
    for (int i = 0; i < ordo; i++) hasil[i] = (int *)malloc(ordo * sizeof(int));

    printf("Matriks A\n");
    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j < ordo; j++) {
            scanf("%d", &matriksA[i][j]);
        }
    }
    printf("Matriks B\n");
    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j < ordo; j++) {
            scanf("%d", &matriksB[i][j]);
        }
    }

    perkalian(matriksA, matriksB, hasil, ordo);
    printf("\n");
    for(int i = 0; i < ordo; i++) {
        for(int j = 0; j < ordo; j++) {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }
}