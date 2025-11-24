#include <stdio.h>
#include <stdlib.h>

int main() {
    int batas;

    scanf("%d", &batas);
    int *label_ruangan = malloc(sizeof(int) * batas);
    int *angka = malloc(sizeof(int) * batas);

    for(int i = 1; i <= batas; i++) {
        label_ruangan[i-1] = i;
    }

    for(int i = 0; i < batas; i++) {
        scanf("%d", &angka[i]);
    }

    int *membelah = malloc(sizeof(int) * batas);
    for(int k = 0; k < batas; k++) {
        membelah[k] = angka[k] * label_ruangan[k];
        printf("%d ", membelah[k]);
    }
}