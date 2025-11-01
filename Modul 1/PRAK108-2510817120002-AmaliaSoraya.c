#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main() {
    float putaran = 5;
    float jarak = 14;
    float keliling = jarak / putaran;
    float radius = keliling / (2 * M_PI);

    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", jarak);
    printf(" \n");
    printf("Jawaban : \n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", radius);
}