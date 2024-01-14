#include <stdio.h>
#include <math.h>

int main() {
    int broj, brojac = 0, zbir = 0, proizvod = 1, min, max;
    double aritmeticka_sredina, geometrijska_sredina = 1, harmonijska_sredina = 0;

    // Unos prvog broja

    // Provjera da li je prvi uneseni broj 0
    if (broj == 0) {
        printf("Nema unesenih brojeva.\n");
        return 0;
    }


    // Obrada unijetih brojeva
    while (broj != 0) {
        // Unos sljedeceg broja
        printf("Unesite sljedeci broj (unesite 0 da biste zavrsili): ");
        scanf("%d", &broj);

        if(broj==0) break;

        brojac++;
        
        if(brojac==1) min = max = broj;
        
        zbir += broj;
        proizvod *= broj;

        // Provjera minimuma i maksimuma
        if (broj < min) {
            min = broj;
        }
        if (broj > max) {
            max = broj;
        }

        // Aritmeticka sredina
        aritmeticka_sredina = (double)zbir / brojac;

        // Geometrijska sredina
        geometrijska_sredina *= broj;

        // Harmonijska sredina
        harmonijska_sredina += 1.0 / broj;

    }

    // Ispis rezultata
    printf("\nBroj unesenih brojeva: %d\n", brojac);
    printf("Zbir unesenih brojeva: %d\n", zbir);
    printf("Proizvod unesenih brojeva: %d\n", proizvod);
    printf("Minimum unesenih brojeva: %d\n", min);
    printf("Maksimum unesenih brojeva: %d\n", max);
    printf("Aritmeticka sredina unesenih brojeva: %.2lf\n", aritmeticka_sredina);
    printf("Geometrijska sredina unesenih brojeva: %.2lf\n", pow(geometrijska_sredina, 1.0 / brojac));
    printf("Harmonijska sredina unesenih brojeva: %.2lf\n", brojac / harmonijska_sredina);

    return 0;
}
