#include <stdio.h>

int main() {
    float sepatu_a = 400000, diskon_a = 13;
    float sepatu_b = 350000, diskon_b = 21;
    float harga_a = ((100 - diskon_a) * sepatu_a) / 100;
    float harga_b = ((100 - diskon_b) * sepatu_b) / 100;
    
    printf("Harga sepatu A adalah %.0f\n", sepatu_a);
    printf("Harga sepatu B adalah %.0f\n", sepatu_b);
    printf("Sepatu A mendapat diskon %.0f%% sehingga harganya menjadi %.f\n", diskon_a, harga_a);
    printf("Sepatu B mendapat diskon %.0f%% sehingga harganya menjadi %.f\n", diskon_b, harga_b);

}