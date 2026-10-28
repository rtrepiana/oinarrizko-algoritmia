#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


// Zenbaki bat kapikua den edo ez esaten duen algoritmo bat idatzi. (****)
int main(void)
{
    int n;
    char str[128];

    printf("Sartu zenbaki bat: ");
    fgets(str, 128, stdin);
    sscanf(str,"%d", &n);

    int kapikua = 0;
    for ( int i = n; i > 0; i  =  i / 10 ) {
        kapikua = kapikua  * 10 + ( i % 10 ) ;
    }

    if (kapikua == n) {
        printf("%d kapikua da.\n", n);
    } else {
        printf("%d ez da kapikua.\n", n);
    }
    return 0;
}