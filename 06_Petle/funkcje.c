#include <stdio.h>
#include <stdlib.h>

//Zadanie 1
void sumTwoNumbers(int a, int b) {
    int suma = a + b;

    printf("Suma to: %d", suma);

}

// Zadanie 3
int calculateFactorial(unsigned int n) {
    int silnia = 1;
    int i;

    if(n < 0){
        printf("Bład!!! Liczba ujemna.\n");
        return -1;
    }else{
        for(i = 1; i <= n; i++){
            silnia *= i;
        }
    }
    return silnia;
}


// Zadanie 4
int sumNumbers(int n) {
    int suma;
    for(int i = 1; i <=n; i++){
    suma += i;
    }
    return suma;
}

// Zadanie 8
void calculateFunctionCalss(){
    static int licznik = 0;
    licznik++;
    printf("Liczba wywolana %d razy\n", licznik);
}

// Zadanie 9
unsigned int calculateFactorialRecursively(n) {
    int silnia;
    for()

}

// Zadanie 12
int calculateGeometricSequenceRecursively(int n, int d){
    int i;
    int suma = 0;
    int n2;
    for(n = 1; i <= n; i++){
        n2 =
    }
}



int main()
{
    //sumTwoNumbers(2,4);

    //int wynik = calculateFactorial();
    //printf("Wynik to: %d", wynik);

    //printf("Wynik dodawania to: %d", sumNumbers(6));

    // calculateFunctionCalss();

    return 0;
}

