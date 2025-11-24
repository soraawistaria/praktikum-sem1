#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void identifikasi(int panjang, char *pesan1, char *pesan2) {
    char simbolis[100];
    int count_bintang = 0, count_tagar = 0;

    for(int i = 0; i < panjang-1; i++) {
        if(pesan1[i] == pesan2[i] && pesan2[i] == ' ') {
            simbolis[i] = ' ';
        } else if(pesan1[i] == pesan2[i]) {
            simbolis[i] = '*';
            count_bintang++;
        } else if(pesan1[i] != pesan2[i]) {
            simbolis[i] = '#';
            count_tagar++;
        }
    }
    printf("\n");
    for(int k = 0; k < panjang-1; k++) {
        printf("%c", simbolis[k]);
    }

    printf("\n* = %d", count_bintang);
    printf("\n# = %d", count_tagar);
    
    if(count_bintang >= count_tagar) {
        printf("\nPesan asli");
    } else {
        printf("\nPesan palsu");
    }
}

int main() {
    char pesan1[100], pesan2[100];

    fgets(pesan1, sizeof(pesan1), stdin);
    fgets(pesan2, sizeof(pesan2), stdin);

    int panjang = strlen(pesan1);

    if (strlen(pesan1) != strlen(pesan2)) {
        printf("Panjang kalimat berbeda, pesan palsu");
    } 
    
    else {
        identifikasi(panjang, pesan1, pesan2);
    }
    return 0;
}