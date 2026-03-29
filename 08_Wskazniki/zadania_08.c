#include <stdio.h>
#include <stdlib.h>



int zadanie1() {
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(int*));
    return 0;

}

// Zadanie 2
int sum(int a, int b) {
    printf("Wynik dodawania to: %d\n\n", a + b);
    return 0;
}

int sumVals(int *a, int *b) {
    return *a + *b;
}

int addPtr(int *a, int *b, int *wynik) {
    *wynik = *a + *b;
}

//Zadanie 3
int copyInt(int x,int *w) {
    *w = x;
}

//Zadanie 4
double findMax(const double *num1, double * const num2) {
    if (*num1 > *num2){
        return *num1;
    }else {
        return *num2;
}}

//Zadanie 5
int *initInts(){
    int *nowe = (int*)malloc(3 * sizeof(int));
    if (nowe == NULL) {
        printf("Blad alokacji pamieci\n");
        return NULL;
    }

    *nowe = 5;
    *(nowe + 1) = -12;
    *(nowe + 2) = 33;

    return (nowe + 1);
}


//Zadanie 6
float *initFloats(){
    float *ptr = (float*)malloc(3 * sizeof(float));
    if (ptr == NULL) {
        printf("Blad alokacji pamieci\n");
        return NULL;
    }

    *ptr = 4.5;
    *(ptr + 1) = 2.3;
    *(ptr + 2) = -4.2;

    return ptr;
}

// Zadanie 9
int sqrCopy(int *jedna, int *druga) {

}


int main() {
    //zadanie1();
    //Zadanie 2
    sum(3, 2);


    int liczba1 = 15;
    int liczba2 = 25;
    int wynik = sumVals(&liczba1, &liczba2);
    printf("Suma wartosci %d oraz %d to: %d\n\n", liczba1, liczba2, wynik);


    int x = 12;
    int y = 8;
    int suma = 0;
    addPtr(&x, &y, &suma);
    printf("Wynik to: %d\n\n", suma);

    // Zadanie 3
    int r = 14;
    int r2 = 0;
    printf("Przed kopiowaniem: cel = %d\n\n", r2);
    copyInt(r, &r2);
    printf("Po kopiowaniu: %d\n\n", r2);

    // Zadanie 4
    double a = 5.5;
    double b = 7.2;
    printf("Wieksza liczba to: %lf\n\n", findMax(&a, &b));

    //Zadanie 5
    int *wynik3 = initInts();
    if (wynik3 != NULL) {
        printf("Wartosc 1a: %d\n\n", *wynik3);
        printf("Wartosc 2b: %d\n\n", *(wynik3 - 1));
        printf("Wartosc 3c: %d\n\n", *(wynik3 + 1));

       free(wynik3 - 1);
    }


    // Zadanie 6
    float *wynik4 = initFloats();
    if (wynik4 != NULL) {
        printf("Wartosc 1: %.1f\n\n", *wynik4);
        printf("Wartosc 2: %.1f\n\n", *(wynik4 + 1));
        printf("Wartosc 3: %.1f\n\n", *(wynik4 + 2));

        free(wynik4);
    }
    return 0;
}
