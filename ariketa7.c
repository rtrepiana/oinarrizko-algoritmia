#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Tenperatura Celsius gradutan eskatu eta emaitza Farenheit graduetan edo kelvinetan ematen duen programa idatzi (erabiltzaileak eskatzen duenaren arabera).
int main(void)
{
    double celsius;
    char aukera;
    char str[128];

    printf("Sartu tenperatura Celsius gradutan: ");
    fgets(str, 128, stdin);
    sscanf(str, "%lf", &celsius);

    printf("Nola nahi duzu emaitza? (F/Farenheit, K/Kelvin): ");
    fgets(str, 128, stdin);
    sscanf( str,"%c", &aukera);

    if (aukera == 'F' || aukera == 'f') {
        double fahrenheit = (celsius * 9 / 5) + 32;
        printf("Tenperatura Farenheit graduetan: %.2lf\n", fahrenheit);
    } else if (aukera == 'K' || aukera == 'k') {
        double kelvin = celsius + 273.15;
        printf("Tenperatura Kelvin graduetan: %.2lf\n", kelvin);
    } else {
        printf("Aukera ez da zuzena.\n");
    }

    return 0;
}