#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//1-etik 100-era dauden zenbaki bikoitiak banaka erakutsi eta bakoitien batura erakutsi.
int main(void)
{
    printf("Zenbaki bikoitiak 1-etik 100-era:");
    for (int i = 2; i <= 100; i += 2) {
        printf("%d,", i);
    }
    printf("\n");

    int batura = 0;
    for (int i = 1; i <= 100; i += 2) {
        batura += i;
    }
    printf("Bakoitien batura: %d\n", batura);
    
    return 0;
}