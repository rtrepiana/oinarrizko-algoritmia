#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Zenbaki osoak irakurri, 0-a irakurri arte. Sartutako zenbakien digituen batura pantailaratu. Adibidez: 12, 7, 201, 2, 0 => 15 
int main(void)
{
    int n;
    char str[128];
    int batura = 0;

    printf("Sartu zenbakiak : ");
    do {
        fgets(str, 128, stdin);
        sscanf(str, "%d", &n);

        for (int i = n; i > 0; i = i / 10) {
            batura += i % 10;
        }
        
    } while ( n > 0 );

    printf("Digituen batura: %d\n", batura);

    return 0;
}