
/*
        int a = 10, b = 5;
        int suma = a + b;      // Sabiranje
        int razlika = a - b;   // Oduzimanje
        int proizvod = a * b;  // Množenje
        int kolicnik = a / b;  // Dijeljenje
        int ostatak = a % b;   // Ostatak pri dijeljenju


        int x = 5, y = 10;
        int rezultat_i = (x > 0) && (y < 20);    // Logički "i"
        int rezultat_ili = (x > 0) || (y < 20);  // Logički "ili"
        int rezultat_negacija = !(x > 0);        // Logička negacija


        int p = 5, q = 8;
        int rezultat_jednako = (p == q);      // Da li je jednako?  Vrijednost = 0
        int rezultat_razlicito = (p != q);    // Da li je različito?  Vrijednost = 1
        int rezultat_manje_od = (p < q);      // Da li je manje od?  Vrijednost = 1
        int rezultat_vece_od = (p > q);       // Da li je veće od?  Vrijednost = 0
        int rezultat_manje_ili_jednako = (p <= q);  // Da li je manje ili jednako?  Vrijednost = 1
        int rezultat_vece_ili_jednako = (p >= q);  // Da li je veće ili jednako?  Vrijednost = 0


        int brojevi[5];   // Deklaracija cijelobrojnog niza sa 5 elemenata

        int velicina = sizeof(brojevi) / sizeof(brojevi[0]);


        brojevi[0] = 10;   // Pristup prvom elementu niza
        brojevi[2] = 20;   // Pristup trećem elementu niza


        int matrica[3][3];   // Deklaracija 2D niza (matrice)

        matrica[1][2] = 42;  // Postavljanje vrednosti elementa


        char naziv_univerziteta[] = "Apeiron";



        struct Osoba {
            char ime[30];
            int godine;
            float plata;
        };

       // #include <stdio.h>

        // Definicija strukture
        struct Osoba {
            char ime[30];
            int godine;
            float visina;
        };

        int main() {
            // Deklaracija i inicijalizacija instance strukture
            struct Osoba osoba1 = {"Ana", 25, 1.75};

            // Pristupanje poljima strukture
            printf("Ime: %s\n", osoba1.ime);
            printf("Godine: %d\n", osoba1.godine);
            printf("Visina: %.2f\n", osoba1.visina);

            return 0;
        }


        struct Datum {
            int dan;
            int mjesec;
            int godina;
        };

        struct Dogadjaj {
            char naziv[50];
            struct Datum datum;
        };

        // Korišćenje odgovarajućeg tipa za brojeve
        int broj1 = 42;
        float broj2 = 3.14;


    pokazivac_na_broj++;



    const int broj = 42;        // Deklaracija cijelobrojne konstante
    const int oktalni_broj = 052;  // Oktalna reprezentacija
    const int heks_broj = 0x2A;    // Heksadecimalna reprezentacija

    const float pi = 3.14159;     // Deklaracija realne konstante
    const float e = 2.71828e-5;   // Eksponencijalna reprezentacija


    const char slovo = 'A';   // Deklaracija znakovne konstante


    const char ime[] = "Programiranje";   // Deklaracija nizovne konstante

    #define PI 3.14159    // Definisanje konstante korištenjem #define


    int broj = 42;
    int *pokazivac_na_broj = &broj;


    int *pokazivac;


    int x = 10;
    int *p = &x; // Pokazivač p sada sadrži adresu promjenljive x

    // Pristupanje vrijednosti putem pokazivača
    printf("Vrijednost x: %d\n", *p);


    int *niz = (int *)malloc(5 * sizeof(int)); //rezerviše prostor za niz od pet cijelobrojnih vrijednosti.


    int *niz = (int *)calloc(5, sizeof(int)); 
    //rezerviše prostor za niz od pet cijelobrojnih vrijednosti i postavlja ih na nulu.


    niz = (int *)realloc(niz, 10 * sizeof(int));
    //Ovde se proširuje niz na deset elemenata.


    	free(niz);
  


       // #include <stdio.h>

        int izvrsi_operaciju(int a, int b, int (*operacija)(int, int)) {
            return operacija(a, b);
        }

        int sabiranje(int a, int b) {
            return a + b;
        }

        int oduzimanje(int a, int b) {
            return a - b;
        }

        int main() {
            int rezultat_sabiranja = izvrsi_operaciju(4, 5, &sabiranje);
            int rezultat_oduzimanja = izvrsi_operaciju(8, 3, &oduzimanje);

            printf("Rezultat sabiranja: %d\n", rezultat_sabiranja);
            printf("Rezultat oduzimanja: %d\n", rezultat_oduzimanja);

            return 0;
        }
*/