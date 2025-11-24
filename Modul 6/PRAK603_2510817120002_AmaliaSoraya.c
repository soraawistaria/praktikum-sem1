#include <stdio.h>
#include <stdlib.h>

int main() {
    int baris1, baris2;

    scanf("%d %d", &baris1, &baris2);

    int *kelompok1 = malloc(sizeof(int) * baris1);
    int *kelompok2 = malloc(sizeof(int) * baris2);
    int perkalian;

    if(baris1 != baris2) {
        printf("Jumlah tidak sama");
    }

    else {
        for(int i = 0; i < baris1; i++) {
            scanf("%d", &kelompok1[i]);
        }

        for(int j = 0; j < baris2; j++) {
            scanf("%d", &kelompok2[j]);
        }
        printf("\n");
        for(int x = 0; x < baris1; x++) {
            perkalian = kelompok1[x] * kelompok2[x];
            printf("%d ", perkalian);
        }
    }
}