#include <stdio.h>
#include <math.h>

int main() {
    int broj, brojac = 0, zbir = 0, proizvod = 1, min, max;
    double aritmeticka_sredina, geometrijska_sredina = 1, harmonijska_sredina = 0;

    // Unos prvog broja

    // Provera da li je prvi uneti broj 0
    if (broj == 0) {
        printf("Nema unetih brojeva.\n");
        return 0;
    }

    // Postavljanje inicijalnih vrednosti za minimum i maksimum

    // Obrada unetih brojeva
    while (broj != 0) {
        // Unos sledećeg broja
        printf("Unesite sledeci broj (unesite 0 da biste zavrsili): ");
        scanf("%d", &broj);
        if(broj==0)
        break;
        brojac++;
        if(brojac==1)
        min = max = broj;
        
        zbir += broj;
        proizvod *= broj;

        // Provera minimuma i maksimuma
        if (broj < min) {
            min = broj;
        }
        if (broj > max) {
            max = broj;
        }

        // Aritmeticka sredina
        aritmeticka_sredina = (double)zbir / brojac;

        // Geometrijska sredina (koristimo logaritamski pristup)
        geometrijska_sredina *= broj;

        // Harmonijska sredina
        harmonijska_sredina += 1.0 / broj;

    }

    // Ispis rezultata
    printf("\nBroj unetih brojeva: %d\n", brojac);
    printf("Zbir unetih brojeva: %d\n", zbir);
    printf("Proizvod unetih brojeva: %d\n", proizvod);
    printf("Minimum unetih brojeva: %d\n", min);
    printf("Maksimum unetih brojeva: %d\n", max);
    printf("Aritmeticka sredina unetih brojeva: %.2lf\n", aritmeticka_sredina);
    printf("Geometrijska sredina unetih brojeva: %.2lf\n", pow(geometrijska_sredina, 1.0 / brojac));
    printf("Harmonijska sredina unetih brojeva: %.2lf\n", brojac / harmonijska_sredina);

    return 0;
}
