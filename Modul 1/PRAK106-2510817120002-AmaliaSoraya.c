#include <stdio.h>

int main() {
    int a = 4;
    int b = 8;
    int c = 3;
    int jawaban1 = (a == b) ? 1 : 0;
    int jawaban2 = (b > c) ? 1 : 0;
    int jawaban3 = (a != c) ? 1 : 0;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", jawaban1);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", jawaban2);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", jawaban3);
}