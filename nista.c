

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

        #include <stdio.h>

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

