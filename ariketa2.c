#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Bi zenbaki oso irakurri eta ordenean idatzi.
int main(void)
{
    int a;
    int b;
    char str[128];

    printf("Lehenengo zenbakia sartu\n");
    fgets(str, 128, stdin);
    sscanf(str, "%d", &a);

    printf("Sartu bigarren zenbakia\n");
    fgets(str, 128, stdin);
    sscanf(str, "%d", &b);

    if (a > b)
    {
        printf("Zenbaki ordenatuak: %d,%d\n", b,a);
    }
    else
    {
        printf("Zenbaki ordenatuak: %d,%d\n", a,b);
    }


    return 0;
}