#include <stdio.h>
#include <stdlib.h>



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

int main() {
    // zadanie1();
    // zadanie2();
    // zadanie3();
    // zadanie4();
    // zadanie5();

    return 0;
}
