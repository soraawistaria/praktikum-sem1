#include <stdio.h>

int main() {
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;
    int sisa_ab = a % b;
    int sisa_xy = x % y;
    int total_sisa = sisa_ab + sisa_xy;

    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", total_sisa);

}