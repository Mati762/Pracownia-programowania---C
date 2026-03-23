#include <stdio.h>
#include <stdlib.h>

//Zadanie 1
void sumTwoNumbers(int a, int b) {
    int suma = a + b;

    printf("Suma to: %d", suma);

}

// Zadanie 2
double calculateAbsoluteValue(double n) {
    if (n < 0) {
        printf("Wartosc bezwgledna z liczby n to: %2.lf", n = -n);
    }else{
        printf("Wartosc bezwgledna z liczby n to: %2.lf", n = n);
    }

}

// Zadanie 3
int calculateFactorial(unsigned int n) {
    int silnia = 1;
    int i;

    if(n < 0){
        printf("B³ad!!! Liczba ujemna.\n");
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

// Zadanie 5
int sumSquares(int n) {
    int suma = 0;
    int obrot;
    for(obrot = 1; obrot <= n; obrot++){
        suma += (obrot * obrot);
    }
    printf("Suma: %d", suma);
}

// Zadanie 6
int calculateSquareRootFloor(int n) {
    int i = 0;
    while (i * i <= n) {
        i++;
    }
    return i - 1;
}

//Zadanie 7
void countFunctionCalls() {
    static int licznik = 0;
    licznik++;
    printf("Wywolanie funkcji nr: %d\n", licznik);
}



// Zadanie 8
void calculateFunctionCalss(){
    static int licznik = 0;
    licznik++;
    printf("Liczba wywolana %d razy\n", licznik);
}

// Zadanie 9
int calculateFactorialRecursively(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * calculateFactorialRecursively(n - 1);
}

// Zadanie 12
int calculateGeometricSequenceRecursively(int n, int d){
    int i;
    int suma = 0;
    int n2;
}

int calculateFibonacciRecursively(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return calculateFibonacciRecursively(n - 1) + calculateFibonacciRecursively(n - 2);
}

int calculateArithmeticSequenceRecursively(int n, int d) {
    if (n == 1) {
        return 1;
    }
    return calculateArithmeticSequenceRecursively(n - 1, d) + d;
}

int calculateGeometricSequenceRecursively(int n, int q) {
    if (n == 1) {
        return 1;
    }
    return calculateGeometricSequenceRecursively(n - 1, q) * q;
}

int calculate13(int n) {
    if (n == 1) {
        return 1;
    }
    return 2 * calculate13(n - 1) + 3;
}

int calculate14(int n) {
    if (n == 1) {
        return 2;
    }
    return 3 * calculate14(n - 1) - 1;
}

int calculate15(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    return calculate15(n - 1) + 2 * calculate15(n - 2);
}

int calculate16(int n) {
    if (n == 1) {
        return 2;
    }
    if (n == 2) {
        return 3;
    }
    return 2 * calculate16(n - 1) + 3 * calculate16(n - 2);
}

int calculate17(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma = suma + calculate17(i);
    }
    return suma;
}

int calculateGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return calculateGCD(b, a % b);
}

int main()
{
    //Zadanie1
    //sumTwoNumbers(2,4);

    //Zadanie2
    //calculateAbsoluteValue(-20);

    //Zadanie3
    //int wynik = calculateFactorial();
    //printf("Wynik to: %d", wynik);

    //Zadanie4
    //printf("Wynik dodawania to: %d", sumNumbers(6));

    //Zadanie5
    // sumSquares(5);

    // calculateFunctionCalss();

    //Zadanie 6
    //printf("Podloga z pierwiastka (np. 15): %d\n", calculateSquareRootFloor(15));

    //Zadanie 7
    //countFunctionCalls();
    //countFunctionCalls();
    //countFunctionCalls();

    //Zadanie 8
    printf("Zadanie 10: %d\n", calculateFibonacciRecursively(6));
    printf("Zadanie 11: %d\n", calculateArithmeticSequenceRecursively(5, 2));
    printf("Zadanie 12: %d\n", calculateGeometricSequenceRecursively(4, 3));
    printf("Zadanie 13: %d\n", calculate13(3));
    printf("Zadanie 14: %d\n", calculate14(3));
    printf("Zadanie 15: %d\n", calculate15(4));
    printf("Zadanie 16: %d\n", calculate16(4));
    printf("Zadanie 17: %d\n", calculate17(4));
    printf("Zadanie 18: %d\n", calculateGCD(48, 18));

    return 0;
}
