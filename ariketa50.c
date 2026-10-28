#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Kalkulagailu baten oinarrizko funtzioak egiten dituen programa egin (batuketa, kenketa,
// biderkaketa eta zatiketa). Bi zenbaki eta egin nahi dugun eragiketa eskatuta, eragiketaren
// emaitza pantailaratu. (***)
// OHARRA: Momentuz if-else egiturak erabili, aurrerago ikusiko dugu beste agindu bat
// ariketaren ebazpena errez dezakeena (switch)
int main(void)
{
    int a;
    int b;
    char str[128];
    char op;

    // printf("Lehenengo zenbakia sartu\n");
    // fgets(str, 128, stdin);
    // sscanf(str, "%d", &a);

    // printf("Sartu bigarren zenbakia\n");
    // fgets(str, 128, stdin);
    // sscanf(str, "%d", &b);

    // printf("Sartu egin nahi duzun eragiketa (+, -, *, /)\n");
    // fgets(str, 128, stdin);
    // sscanf(str, " %c", &op);

    fgets(str, 128, stdin);
    sscanf(str, "%d %c %d", &a, &op, &b);

    if (op == '+') {
        printf("Emaitza: %d\n", a + b);
    } else if (op == '-') {
        printf("Emaitza: %d\n", a - b);
    } else if (op == '*') {
        printf("Emaitza: %d\n", a * b);
    } else if (op == '/') {
        if (b != 0) {
            printf("Emaitza: %d\n", a / b);
        } else {
            printf("Errorea: zeroz zatitu ezin da\n");
        }
    } else {
        printf("Errorea: eragiketa ez da baliozkoa\n");
    }

    return 0;
}