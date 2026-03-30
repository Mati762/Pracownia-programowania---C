#include <stdio.h>
#include <stdlib.h>
#include <math.h>



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

//Zadanie 7
float* initFlts(){
    float *zm = (float*)malloc(4 * sizeof(float));
    if (zm == NULL) {
        printf("Blad alokacji pamieci\n");
        return NULL;
    }

    *zm = 0.5;
    *(zm + 1) = 1.5;
    *(zm + 2) = 2.5;
    *(zm + 3) = 3.5;

    return (zm + 3);
}

// Zadanie 8
int sumToPtr(const int *a, const int *b, int *c) {
    *c = *a + *b;
}

// Zadanie 10
double subPtrs(const double *num1, double * const num2){
    return *num1 - *num2;
}

// Zadanie 11
int sumSqrs(const int *num1, int * const num2){
    return (*num1 * *num1) + (*num2 * *num2);
}

// Zadanie 13
int minPtr(int *a, int *b, int *c){
    if (*a < *b && *a < *c){
        return *a;
    }else if (*b < *a && *b < *c){
        return *b;
    }else{
        return *c;
    }

}

// Zadanie 16
void swap(int *ptr1, int *ptr2) {
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
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
        printf("Wartosc 1d: %.1f\n\n", *wynik4);
        printf("Wartosc 2e: %.1f\n\n", *(wynik4 + 1));
        printf("Wartosc 3f: %.1f\n\n", *(wynik4 + 2));

        free(wynik4);
    }


    //Zadanie 7
    float *wynik5 = initFlts();
    if (wynik5 != NULL) {
        printf("Wartosc 1g: %.1f\n\n", *wynik5);
        printf("Wartosc 2h: %.1f\n\n", *(wynik5 - 1));
        printf("Wartosc 3i: %.1f\n\n", *(wynik5 - 2));
        printf("Wartosc 3j: %.1f\n\n", *(wynik5 - 3));

        free(wynik5 - 3);
    }

    //Zadanie 8
    int x8 = 5;
    int y8 = 6;
    int wynik8 = 0;
    sumToPtr(&x8, &y8, &wynik8);
    printf("sumToPtr to: %d\n\n", wynik8);

    // Zadanie 10
    double a10 = 10.5;
    double b10 = 5.5;
    double wynik10 = subPtrs(&a10, &b10);
    printf("Wynik odejmowania: %.2f\n\n", wynik10);

    // Zadanie 11
    const int z11 = 2;
    int x11 = 3;
    int wynik11 = sumSqrs(&z11, &x11);
    printf("Wynik sumSqrs to: %d\n\n", wynik11);

    // Zadanie 13
    int x13 = 9;
    int y13 = 4;
    int z13 = 3;
    int wynik13 = minPtr(&x13, &y13, &z13);
    printf("Wynik minPtr to: %d\n\n", wynik13);

    // Zadanie 16
    int a16 = 4;
    int b16 = 8;
    printf("Przed zmiana: a = %d, b = %d\n", a16, b16);
    swap(&a16, &b16);
    printf("Po zmianie swap: a = %d, b = %d\n", a16, b16);


    return 0;
}
