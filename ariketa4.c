#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// N zenbaki bat pantailatik irakurri eta ondoren A hizkia N aldiz idatzi.
int main(void)
{
    int n;
    char str[128];

    printf("N zenbakia sartu\n");
    fgets(str, 128, stdin);
    sscanf(str, "%d", &n);

    for (int i = 0; i < n; i++){
        //printf("A\n");
        printf("A ");
    }
    printf("\n");

    return 0;
}