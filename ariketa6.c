#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Lehenengo 30 zenbaki naturalak pantailan idatzi handitik txikira.
int main(void)
{
    printf("Lehenengo 30 zenbaki naturalak handitik txikira: ");
    for (int i = 30; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}