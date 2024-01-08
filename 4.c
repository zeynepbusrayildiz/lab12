#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kendiSiralama(char kelimeler[10][20]) {
	int i, j, k;
    for (i = 0; i < 9; ++i) {
        for (j = i + 1; j < 10; ++j) {
            if (kelimeler[j][0] < kelimeler[i][0]) {
                for (k = 0; k < 20; ++k) {
                    char temp = kelimeler[i][k];
                    kelimeler[i][k] = kelimeler[j][k];
                    kelimeler[j][k] = temp;
                }
            }
        }
    }
}

int main() {
    char kelimeler[10][20];
    int i=0;

    printf("Lutfen 10 kelime giriniz:\n");
    for (i = 0; i < 10; ++i) {
        printf("Kelime %d: ", i + 1);
        scanf("%s", kelimeler[i]);
    }
    
    kendiSiralama(kelimeler);

    printf("\nSiraya Gore Kelimeler:\n");
    for (i = 0; i < 10; ++i) {
        printf("%s\n", kelimeler[i]);
    }

    return 0;
}

