#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
// Zadanie1.Napisz program, który wyœwietla wszystkie liczby ca³kowite od 1 do 100, u¿ywaj¹c pêtli for.
int main(){
    for(int i = 1; i <= 100 ;i++) {
        printf("%d\n", i);
    }

    return 0;
}
*/


/*

// Zadanie2.Utwórz program, który prosi u¿ytkownika o wprowadzenie liczby ca³kowitej n, a nastêpnie wyœwietla sumê wszystkich liczb ca³kowitych od 1 do n u¿ywaj¹c pêtli while.
int main(){
    int n;
    int i = 1;
    int suma = 0;
    printf("Podaj liczbe: ");
    scanf("%d", &n);
    while(i <= n){
        suma += i;
        i++;
    }

    printf("Suma to: %d", suma);

    return 0;
}
*/

/*
// Zadanie3. Napisz program, który czyta od u¿ytkownika liczby ca³kowite do momentu wprowadzenia zera i nastêpnie wyœwietla sumê wszystkich wprowadzonych liczb dodatnich oraz sumê wszystkich liczb ujemnych (osobno), u¿ywaj¹c pêtli do-while.
int main(){
    int liczba;
    int suma1 = 0;
    int suma2 = 0;

    do {
        printf("Podaj liczbe: ");
        scanf("%d", &liczba);
        if(liczba > 0){
            suma1 = suma1 + liczba;
        }else if (liczba < 0){
            suma2 = suma2 + liczba;
        }
    }while(liczba != 0);

    printf("Suma1: %d\n", suma1);
    printf("Suma2: %d\n", suma2);
    return 0;
}
*/

/*
// Zadanie4. Stwórz program, który oblicza i wyœwietla silniê podanej przez u¿ytkownika nieujemnej  liczby ca³kowitej, u¿ywaj¹c pêtli for.
int main(){
    int liczba;
    int silnia = 1;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba);

    if (liczba < 0){
        printf("Blad zla liczba!!!!");
    }else {
        for (int i = 1; i <= liczba; i++){
            silnia = silnia * i;
            printf("%d ", i);
        }
        printf("\nWynik silni to: %d", silnia);
    }
    return 0;
}

*/


/*
// Zadanie5. Napisz program, który wyœwietla pierwszych 10 liczb ci¹gu Fibonacciego, u¿ywaj¹c pêtli while.
int main(){
    int a = 0;
    int b = 1;
    int krok;
    int i = 0;

    printf("Pierwsze 10 liczb ciagu Fibonacciego to:\n");

    while(i < 10) {
        printf("%d `", a);
        krok = a + b;
        a = b;
        b = krok;
        i++;
    }

    printf("\n");

    return 0;
}

*/

/*
// Zadanie6. Napisz program, który prosi u¿ytkownika o wprowadzenie dodatniej liczby ca³kowitej n, a nastêpnie oblicza i wyœwietla [Vn] (czêœæ ca³kowita/pod³oga pierwiastka kwadratowego).
int main() {
    int n;
    int i = 0;

    printf("Podaj liczbe dodatnia: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Blad! Liczba ujemna!!!");
    }else {
        while (i * i <= n) {
            i++;
        }
        int obliczenia = i - 1;

        printf("Podloga pierwiastka to: %d\n", obliczenia);
    }


    return 0;
}
*/

// Zadanie7.
int main() {
    int n;
    int i = 0;

    printf("Podaj liczbe dodatnia: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Blad! Liczba ujemna!!!\n");
    } else {
        while (i * i < n) {
            i++;
        }

        printf("Sufit pierwiastka kwadratowego to: %d\n", i);
    }

    return 0;
}



