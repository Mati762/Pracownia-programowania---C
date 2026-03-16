#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Zadanie1.Napisz program, który wyświetla wszystkie liczby całkowite od 1 do 100, używając pętli for.
int main(){
    for(int i = 1; i <= 100 ;i++) {
        printf("%d\n", i);
    }

    return 0;
}


// Zadanie2.Utwórz program, który prosi użytkownika o wprowadzenie liczby całkowitej n, a następnie wyświetla sumę wszystkich liczb całkowitych od 1 do n używając pętli while.
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

// Zadanie3. Napisz program, który czyta od użytkownika liczby całkowite do momentu wprowadzenia zera i następnie wyświetla sumę wszystkich wprowadzonych liczb dodatnich oraz sumę wszystkich liczb ujemnych (osobno), używając pętli do-while.
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



// Zadanie4. Stwórz program, który oblicza i wyświetla silnię podanej przez użytkownika nieujemnej  liczby całkowitej, używając pętli for.
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





// Zadanie5. Napisz program, który wyświetla pierwszych 10 liczb ciągu Fibonacciego, używając pętli while.
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




// Zadanie6. Napisz program, który prosi użytkownika o wprowadzenie dodatniej liczby całkowitej n, a następnie oblicza i wyświetla [Vn] (część całkowita/podłoga pierwiastka kwadratowego).
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

// Zadanie8.
int main() {
   int poprzednia, obecna, nastepna;
   int spelnione_warunki = 0;

   printf("Podaj liczbe nr 1: ");
   scanf("%d", &poprzednia);
   printf("Podaj liczbe nr 2: ");
   scanf("%d", &obecna);

   for (int i = 3; i <= 10; i++) {
       printf("Podaj liczbe nr %d: ", i);
       scanf("%d", &nastepna);
       if (2 * obecna < poprzednia + nastepna) {
           spelnione_warunki++;
       }
       poprzednia = obecna;
       obecna = nastepna;
   }
   printf("Ilosc elementow spelniajacych warunek: %d\n", spelnione_warunki);
   return 0;
}




// Zadanie10.
int main() {
   int n;
   printf("Podaj liczbe calkowita n: ");
   scanf("%d", &n);
   printf("Dzielniki liczby %d to: ", n);
   for (int i = 2; i <= n / 2; i++) {
       if (n % i == 0) {
           printf("%d ", i);
       }
   }
   printf("\n");

   return 0;
}



// Zadanie11.
int main() {
   int n;
   int suma = 0;
   printf("Podaj liczbe calkowita: ");
   scanf("%d", &n);
   if (n < 0) {
       n = -n;
   }
   printf("Cyfry od konca: ");
   if (n == 0) {
       printf("0");
   }
   while (n > 0) {
       int cyfra = n % 10;
       printf("%d ", cyfra);
       suma = suma + cyfra;
       n = n / 10;
   }
   printf("\nSuma cyfr: %d\n", suma);
   return 0;
}


// Zadanie12.
int main() {
    int a;
    int b;

    printf("Podaj liczbe a: ");
    scanf("%d", &a);
    printf("Podaj liczbe b: ");
    scanf("%d", b);

    while (a != b) {
        if( a > b) {
            a - b;
        }else {
            b - a;
        }
    }
    printf("%d", a);

    return 0;
}


