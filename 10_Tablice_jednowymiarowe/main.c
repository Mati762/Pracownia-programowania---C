#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void findMaxValue(int *numbers, int size){
    int max = numbers[0];
    for (int i = 0; i <= size; i++){
        if (numbers[i] > max){
            max = numbers[i];
        }
    }
    printf("Maksymalna wartosc w tej tablicy to: %d", max);
}

double average(unsigned int n, int *tab){
    double suma = 0;
    for (int i = 0; i < n; i++){
        suma += tab[i];
    }
    return (suma / n);
}

int sumSquares(int n, int *tab){
    int suma = 0;
    for(int i = 0; i < n; i++){
        suma += pow(tab[i], 2);
    }
    return suma;
}

void copyArr(unsigned int n, int *tab1, int *tab2){
    for(int i = 0; i < n; i++){
            tab2[i] = tab1[i];
    }
}

void revCopy(unsigned int n, int *tab1, int *tab2){
    for(int i = 0; i < n; i++){
        tab2[n - 1 - i] = tab1[i];
    }
}

void reverseArr(unsigned int n, int *tab){
    for(int i = 0; i < n /2; i++){
        int temp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = temp;
    }
}

int maxValue(unsigned int n, int * tab){
    int max = *tab;
    for(int i = 1; i < n; i++){
        if(tab[i] > max){
            max = tab[i];
        }
    }
    return max;
}

int maxIdx(unsigned int n, int * tab){
    int max = *tab;
    int hejo = 0;
    for(int i = 1; i < n; i++){
        if(tab[i] > max){
            max = tab[i];
            hejo = i;
        }
    }
    return hejo;
}

void shiftLeft(unsigned int n, float *tab) {
    float temp = tab[0];
    for(int i = 0; i < n - 1; i++){
        tab[i] = tab[i + 1];
    }
    tab[n - 1] = temp;
}

void shiftRight2(unsigned int n, int *tab){
    int temp1 = tab[n - 1];
    int temp2 = tab[n - 2];
    for(int i = n - 1; i >= 2; i--){
        tab[i] = tab[i - 2];
    }
    tab[0] = temp2;
    tab[1] = temp1;
}

int *shiftLeft2(unsigned int n, int *tab){
    int *nowa = (int*)malloc(n * sizeof(int));
    if (nowa == NULL) return NULL;
    int temp = tab[0];
    for(int i = 0; i < n - 1; i++){
        nowa[i] = tab[i + 1];
    }
    *(nowa + n - 1) = temp;
    return nowa;
}


int main()
{
    // Zadanie 1 -- findMaxValue
    int rozmiar = 6;
    int tab[] = {2, 3, 5, 2, 6, 12};
    findMaxValue(tab, rozmiar);
    // Zadanie 2 -- average
    double wynik = average(rozmiar, tab);
    printf("\nSrednia arytmetyczna wynosi: %.2lf\n", wynik);
    // Zadanie 3 == sumSquares
    int rozmiar3 = 3;
    int tab3[] = {2, 3, 4};
    int wynik3 = sumSquares(rozmiar3, tab3);
    printf("Suma kwadratow tablicy to: %d\n", wynik3);
    // Zadanie 4 -- copyArr
    unsigned int n = 5;
    int tab33[] = {1, 2, 3, 4, 5};
    int tab44[] = {0, 0, 0, 0, 0};

    printf("Zawartosc tab44 przed kopiowaniem: ");
    for(int j = 0; j < n; j++) {
        printf("%d ", tab44[j]);
    }
    printf("\n");

    copyArr(n, tab33, tab44);

    printf("Zawartosc tab44 po kopiowaniu: ");
    for(int j = 0; j < n; j++) {
        printf("%d ", tab44[j]);
    }
    printf("\n");

    // Zadanie 5
    unsigned int n5 = 5;
    int tab5[] = {1, 2, 3, 4, 5};
    int tab55[] = {0, 0, 0, 0, 0};

    printf("Zawartosc tab55 przed kopiowaniem: ");
    for(int j = 0; j < n5; j++) {
        printf("%d ", tab55[j]);
    }
    printf("\n");

    revCopy(n5, tab5, tab55);

    printf("Zawartosc tab55 po kopiowaniu: ");
    for(int j = 0; j < n; j++) {
        printf("%d ", tab55[j]);
    }
    printf("\n");

    // Zadanie 6
    unsigned int n6 = 4;
    int tab6[] = {1, 2, 3, 4};

    printf("Zawartosc tab6 przed kopiowaniem: ");
    for(int j = 0; j < n6; j++) {
        printf("%d ", tab6[j]);
    }
    printf("\n");

    reverseArr(n6, tab6);

    printf("Zawartosc tab6 po kopiowaniu: ");
    for(int j = 0; j < n6; j++) {
        printf("%d ", tab6[j]);
    }
    printf("\n");

    // Zadanie 7
    unsigned int rozmiar7 = 4;
    int tab7[] = {1,30,3,4};
    int wynik7 = maxValue(rozmiar7, tab7);
    printf("Najwieksza wartosc to: %d", wynik7);

    //Zadanie 9
    unsigned int rozmiar9 = 4;
    int tab9[] = {1,99,3,99};
    int wynik9 = maxIdx(rozmiar9, tab9);
    printf("indeks najwiekszej wartosci to: %d", wynik9);


    // Zadanie 11
    unsigned int n11 = 4;
    float tab11[] = {1.7 , 5.6, 3.7, 5};
    shiftLeft(n11, tab11);
    for(int j = 0; j < n11; j++){
        printf("%.2f ", tab11[j]);
    }



    // Zadanie 12
    unsigned int n12 = 6;
    int tab12[] = {1, 2, 3, 4, 5, 6};
    shiftRight2(n12, tab12);
    for(int j = 0; j < n12; j++){
        printf("%d ", tab12[j]);
    }


    // Zadanie 13
    unsigned int r = 5;
    int tab13[] = {1, 2, 3, 4, 5};
    int* wynik13 = shiftLeft2(r, tab13);
    for(int j = 0; j < r; j++){
        printf("%d", (wynik13[j]));
    }
    free(wynik13);



    return 0;
}

