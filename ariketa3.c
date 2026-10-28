#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main(void)
{
    int a;
    int b;
    int c;
    char str[128];

    printf("Zenbaki bat sartu:\n");
    fgets(str, 128, stdin);
    sscanf(str, "%d", &a);

    printf("Bigarren zenbakia sartu:\n");
    fgets(str, 128, stdin);
    sscanf(str, "%d", &b);

    printf("Hirugarren zenbakia sartu:\n");
    fgets(str, 128, stdin);
    sscanf(str, "%d", &c);

    if (a*a + b*b == c*c )
    {
        printf("(%d,%d,%d) hirukote pitagorikoa dira (%d + %d = %d )\n", a,b,c, a*a, b*b, c*c );
    }
    else
    {
        printf("(%d,%d,%d) ez dira hirukote pitagorikoa (%d + %d != %d )\n", a,b,c,a*a, b*b, c*c );
    }

    return 0;
}