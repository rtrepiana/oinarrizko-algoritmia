#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Enpresa bateko langileen asteko soldata garbia kalkulatu nahi dugu, lan orduen arabera
// modu honetan ordaintzen zaiela kontuan hartuta:
// Lehenengo 35 orduak, teklatutik sartutako tarifa batekin ordaintzen dira.
// 35. ordutik aurrera lan egindakoak %150ean ordaintzen dira (tarifa arruntarekin
// konparatuta).
// Hileroko soldataren arabera ondorengo zergak aplikatzen zaizkie langileei:
//- Zergarik ez, soldata 600 euro baino gutxiago bada.
//- Hurrengo 600 euroak %15
//- Hurrengo 600 euroak %20.
// Langileak irabazitako soldata kalkulatu, teklatutik langilearen izena, astean lan egindako
// orduak eta tarifa normala sartuta. Pantailan “XXXXX-ek YYYYY euro kobratu behar ditu”
// moduko mezua erakutsi. (**)
int main(void)
{
    char izena[128];
    double orduak;
    double tarifa;
    char str[128];

    printf("Sartu langilearen izena: ");
    fgets(str, 128, stdin);
    sscanf(str, "%127[^\n]", izena);


    printf("Sartu astean lan egindako orduak: ");
    fgets(str, 128, stdin);
    sscanf(str, "%lf", &orduak);

    printf("Sartu tarifa normala: ");
    fgets(str, 128, stdin);
    sscanf(str, "%lf", &tarifa);

    double soldata;
    if (orduak <= 35) {
        soldata = orduak * tarifa;
    } else {
        soldata = 35 * tarifa + (orduak - 35) * tarifa * 1.5;
    }

    double zergak = 0;
    if (soldata > 600) {
        if (soldata <= 1200) {
            zergak = (soldata - 600) * 0.15;
        } else if (soldata <= 1800) {
            zergak = 600 * 0.15 + (soldata - 1200) * 0.2;
        } else {
            zergak = 600 * 0.15 + 600 * 0.2 + (soldata - 1800) * 0.2;
        }
    }

    double soldata_garbia = soldata - zergak;
    printf("%s-ek %.2lf euro kobratu behar ditu\n", izena, soldata_garbia);

    return 0;
}