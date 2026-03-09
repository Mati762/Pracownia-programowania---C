#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Zamieñ wartoœci dwóch zmiennych ca³kowitych bez u¿ycia dodatkowej zmiennej.
void zadanie1() {
    int a = 12;
    int b = 33;
    printf("%d %d\n", a, b);
    a = a ^ b; // ^ to operator XOR
    b = a ^ b;
    a = a ^ b;
    printf("%d %d\n", a, b);

}

// SprawdŸ, czy liczba ca³kowita jest parzysta czy nieparzysta za pomoc¹ operatorów bitowych
void zadanie2() {
    int liczba = 15;
    printf("Liczba jest: %s", (liczba & 1) ? "nieparzysta" : "parzysta");
}

// Wyznacz wartoœæ bitu na okreœlonej pozycji w liczbie ca³kowitej.
void zadanie3() {
    int liczba = 13;
    int pozycja = 2;

    printf("Wartosc bitu na pozycji %d to: %d\n", pozycja, (liczba >> pozycja) & 1);
}

// Zeruj wartoœæ bitu na okreœlonej pozycji w liczbie ca³kowitej.
void zadanie4() {
    int liczba = 15;
    int pozycja = 2;
    int wynik = liczba & ~(1 << pozycja);
    printf("Liczba %d po wyzerowaniu bitu na pozycji %d to: %d\n", liczba, pozycja, wynik);
}

// Odwróæ wartoœæ wszystkich bitów w liczbie ca³kowitej.
void zadanie5() {
    int liczba = 15;
    printf("Po odwroceniu: %d", ~liczba);
}

// Przesuñ bity liczby ca³kowitej o okreœlon¹ liczbê pozycji w lewo
void zadanie6() {
    int x1 = 5;
    int przesuwanie = 2;

    printf("Po przesunieciu w  lewo: %d", x1 << przesuwanie);
}

// Przesuñ bity liczby ca³kowitej o okreœlon¹ liczbê pozycji w prawo.
void zadanie7() {
    int liczba = 20;
    int przesuniecie = 4;

    printf("Po przesunieciu: %d", liczba >> przesuniecie);
}

// Wyznacz “XOR” dwóch liczb ca³kowitych.
void zadanie8() {
    int liczba1 = 4;
    int liczba2 = 2;
    printf("Teraz: %d\n", liczba1 ^ liczba2);
}
int main()
{
    // zadanie1();
    // zadanie2();
    // zadanie3();
    // zadanie4();
    // zadanie5();
    // zadanie6();
    // zadanie7();
    zadanie8();

    return 0;
}
