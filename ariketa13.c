#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int povv(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    printf("pow(%d, %d) = %d\n", base, exp, result);
    return result;
}

// “n” zenbaki bat irakurri eta ondorengo segidaren batuketa egingo duen programa egin.
int main(void)
{
    int n;
    printf("Sartu n zenbakia: ");
    scanf("%d", &n);

    int batuketa = 0;
    for (int i = 1; i <= n; i++) {
        batuketa += povv(i, i);
    }
    
    printf("1-tik %d-ra arteko zenbakien batuketa: %d\n", n, batuketa);
    
    return 0;
}

