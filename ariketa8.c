#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// % eragileak zatiketaren hondarra itzultzen du. Zenbaki bat sartuta programak zenbakia bakoitia ala bikoitia den erakutsi behar du. (*)
int main(void)
{
    int zenbakia;
    char str[128];

    printf("Sartu zenbaki bat: ");
    fgets(str, 128, stdin);
    sscanf(str, "%d", &zenbakia);

    if (zenbakia % 2 == 0) {
        printf("Zenbakia bikoitia da.\n");
    } else {
        printf("Zenbakia bakoitia da.\n");
    }

    return 0;
}