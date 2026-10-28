#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    char str[128];
    // Ariketa bi zenbakirekin
    printf("Ariketa bi zenbakirekin\n");

    printf("Lehenengo zenbakia sartu\n");
    fgets(str, 128, stdin);
    sscanf(str, "%d", &a);

    printf("Sartu bigarren zenbakia\n");
    fgets(str, 128, stdin);
    sscanf(str, "%d", &b);

    if (a > b)
    {
        printf("Zenbaki handiena da: %d\n", a);
    }
    else
    {
        printf("Zenbaki handiena da: %d\n", b);
    }

    // Ariketa hiru zenbakirekin
    printf("\nAriketa hiru zenbakirekin\n");

    printf("Zenbaki bat sartu:\n");
    fgets(str, 128, stdin);
    sscanf(str, "%d", &a);

    printf("Bigarren zenbakia sartu:\n");
    fgets(str, 128, stdin);
    sscanf(str, "%d", &b);

    printf("Hirugarren zenbakia sartu:\n");
    fgets(str, 128, stdin);
    sscanf(str, "%d", &c);

    if (a > b && a > c)
    {
        printf("Zenbaki handiena: %d\n", a);
    }
    else if (b > c)
    {
        printf("Zenbaki handiena: %d\n", b);
    }
    else
    {
        printf("Zenbaki handiena: %d\n", c);
    }

    return 0;
}