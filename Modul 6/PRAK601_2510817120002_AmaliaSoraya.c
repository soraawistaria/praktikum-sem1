#include <stdio.h>
#include <stdlib.h>

int main() {
    int baris, kolom;

    scanf("%d %d", &baris, &kolom);

    int *x = malloc(sizeof(int) * baris *kolom);

    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            scanf("%d",  &x[baris * i + j]);
        }
    }

    for(int i = 0; i < baris; i++) {
        for(int j = 0; j < kolom; j++) {
            printf("%d ", x[baris * i + j]);
        }
        printf("\n");
    }
}