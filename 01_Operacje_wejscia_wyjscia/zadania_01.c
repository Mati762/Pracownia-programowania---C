#include <stdio.h>
#include <stdlib.h>
#include <math.h>



// Napisz program, który prosi użytkownika o wprowadzenie jednej liczby całkowitej, a następnie wyświetla ją na ekranie.
void zadanie1() {
    int liczba1;
    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba1);
    printf("Twoja liczba to: %d\n", liczba1);
}

// Stwórz program, który wczytuje od użytkownika dwie liczby zmiennoprzecinkowe i wypisuje ich różnicę.
void zadanie2() {
    float liczba1, liczba2;
    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%f", &liczba2);
    printf("Roznica wynosi: %f\n", liczba1 - liczba2);
}

// Zaprojektuj aplikację, która pyta użytkownika o jego rok urodzenia, a następnie wypisuje rok poprzedni (o jeden mniejszy).
void zadanie3() {
    int rok_urodzenia;
    printf("Podaj rok urodzenia: ");
    scanf("%d", &rok_urodzenia);
    printf("Rok urodzenia po zmianie to: %d\n", rok_urodzenia - 1);
}

// Napisz program, który wczytuje od użytkownika trzy liczby całkowite i wypisuje ich średnią jako wartość zmiennoprzecinkową.
void zadanie4() {
    int liczba1, liczba2, liczba3;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &liczba1);
    printf("Podaj druga liczbe: ");
    scanf("%d", &liczba2);
    printf("Podaj trzecia liczbe: ");
    scanf("%d", &liczba3);

    printf("Twoja srednia: %f\n", (float)(liczba1 + liczba2 + liczba3) / 3);
}

// Utwórz program, który prosi użytkownika o wprowadzenie dwóch liter (znaków), a następnie wypisuje je w odwrotnej kolejności.
void zadanie5() {
    char litera1, litera2;
    printf("Wprowadz pierwsza litere: ");
    scanf(" %c", &litera1);
    printf("Wprowadz druga litere: ");
    scanf(" %c", &litera2);
    printf("\nLitery w odwrotnej kolejności: %c %c\n", litera2, litera1);
}

//Napisz program, który prosi użytkownika o wprowadzenie jednej liczby zmiennoprzecinkowej, a następnie podwaja jej wartość i wypisuje wynik.
void zadanie6(){
    double liczba1;
    printf("Podaj liczbe zmienoprzecinkowa: ");
    scanf("%lf", &liczba1);
    printf("\nPodwojona liczba: %lf\n", liczba1 * 2);

}

//Utwórz program, który wczytuje od użytkownika liczbę zmiennoprzecinkową reprezentującą kwotę w dolarach, a następnie wypisuje, ile to jest euro, przyjmując stały kurs wymiany (np. 1 dolar = 0.85 euro).
void zadanie7(){
    double dolar;
    printf("Podaj kwote w dolarach: ");
    scanf("%lf", &dolar);
    printf("Kwota po przewalutowaniu na euro: %.2lf\n", dolar * 0.85);
}

// Napisz program, który wyświetla na ekranie tekst: To jest cytat: "Czesto uzywamjezyka C.". Upewnij się, że znaki cudzysłowu są poprawnie wyświetlane jako część napisu
void zadanie8(){
    char cytat[] = "To jest cytat: \"Czesto uzywam jezyka C.\"";
    printf("%s", cytat);
}

// Stwórz program, który wypisuje na standardowe wyjście ścieżkę do folderu w systemie Windows, np. C:\Program Files\MojaAplikacja\ (na sztywno, bez pobierania czegoś z systemu) lub C:\\Program Files\\MojaAplikacja\\.
void zadanie9(){
    printf("Sciezka do folderu: C:\\Program Files\\MojaAplikacja\\");
}

// Zaprojektuj program, który pokazuje, jak wypisać na ekranie następujący tekst: Specjalne znaki: \t (tabulacja), \n (nowa linia), % (procent), \\ (ukosnik wsteczny)..
void zadanie10(){
    printf("Specjalne znaki: \\t (tabulacja), \\n (nowa linia), %% (procent), \\\\ (ukosnik wsteczny).");
}

// Napisz program, który wczytuje ze standardowego wejścia dwie liczby wymierne reprezentujące długości boków trójkąta prostokątnego. Następnie oblicz i wyświetl długość przeciwprostokątnej.
void zadanie11(){
    double bok1, bok2;
    printf("Podaj liczbe: ");
    scanf("%lf", &bok1);
    printf("Podaj liczbe: ");
    scanf("%lf", &bok2);
    printf("Dlugosc przeciwprostokatnej: %.2lf", sqrt(pow(bok1, 2) + pow(bok2, 2)));
}

// Napisz program, który wczytuje ze standardowego wejścia całkowitą i wypisuje na standardowym wyjściu jej wartość bezwzględną.
void zadanie12(){
    int liczba;
    printf("Podaj liczbe: ");
    scanf("%d", &liczba);
    printf("Wartosc bezwgledna to: %d", abs(liczba));
}

// Napisz program, który wczytuje ze standardowego wejścia zmiennoprzecinkową i wypisuje na standardowym wyjściu jej wartość bezwzględną.
void zadanie13(){
    double liczba;
    printf("Podaj liczbe: ");
    scanf("%lf", &liczba);
    printf("Wartosc bezwgledna to: %lf", fabs(liczba));
}

// Znajdź przykład i wyświetl na standardowym wyjściu, kiedy dodawanie liczb zmiennoprzecinowych nie jest łączne.
void zadanie14(){
    double a = 1e20;
    double b = -1e20;
    double c = 3.14;

    printf("Wynik (a + b) + c = %lf\n", (a + b) + c);
    printf("Wynik a + (b + c) = %lf\n", a + (b + c));
}
int main() {
    // zadanie1();
    // zadanie2();
    // zadanie3();
    // zadanie4();
    // zadanie5();
    // zadanie6();
    // zadanie7();
    // zadanie8();
    // zadanie9();
    // zadanie10();
    // zadanie11();
    // zadanie12();
    // zadanie13();
    // zadanie14();

    return 0;
}
