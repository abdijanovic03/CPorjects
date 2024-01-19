#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int broj, brojac = 0, zbir = 0, proizvod = 1, min, max;
    double aritmeticka_sredina, geometrijska_sredina = 1, harmonijska_sredina = 0;

    // Otvori fajl za pisanje
    FILE *file = fopen("rezultati.txt", "w");

    // Provjera da li je otvaranje fajla uspjesno
    if (file == NULL) {
        printf("Nije moguce otvoriti fajl za pisanje.\n");
        return 1;
    }

    // Obrada unijetih brojeva
    do {
        // Unos sljedeceg broja
        printf("Unesite broj (unesite 0 da biste zavrsili): ");
        scanf("%d", &broj);

        if (broj == 0) {
            break; // Izlaz iz petlje ako je unesena 0
        }

        brojac++;

        if (brojac == 1) {
            min = max = broj;
        }

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

    } while (broj != 0);

    // Ispis rezultata u fajl
    fprintf(file, "Broj unesenih brojeva: %d\n", brojac);
    fprintf(file, "Zbir unesenih brojeva: %d\n", zbir);
    fprintf(file, "Proizvod unesenih brojeva: %d\n", proizvod);
    fprintf(file, "Minimum unesenih brojeva: %d\n", min);
    fprintf(file, "Maksimum unesenih brojeva: %d\n", max);
    fprintf(file, "Aritmeticka sredina unesenih brojeva: %.2lf\n", aritmeticka_sredina);
    fprintf(file, "Geometrijska sredina unesenih brojeva: %.2lf\n", pow(geometrijska_sredina, 1.0 / brojac));
    fprintf(file, "Harmonijska sredina unesenih brojeva: %.2lf\n", brojac / harmonijska_sredina);
    

    // Zatvori fajl
    fclose(file);

    printf("Rezultati su zapisani u fajl 'rezultati.txt'.\n");
	system("pause");
    return 0;
}

