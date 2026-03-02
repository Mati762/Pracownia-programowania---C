#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Material z zajec ( Operacje arytmetyczne)
void przyklad1() {
    int a = 203;
    int b = 5;

    a = a * b;
    a *= b;

    a = a / b;
    a /= b;

    a = a % b;
    a %= b;

    int i = 0;
    printf("%d", i++);
    printf("%d", i);
    printf("%d", ++i);
    printf("%d", ++i);
    printf("%d\n", i);

    double s = 0.1 + 0.2;
    printf("0.1 + 0.2 = %.20lf\n", s);
    int x1 = 8;
    int x2 = 3;
    double x3 = (double)x1 / x2;
    printf("%lf\n", x3);

}

// Material z zajec ( Wartosci logiczne)
void przyklad2() {
    double x1 = 0.1 + 0.2;
    double x2 = 0.3;
    double epsilon = 1e-9;
    if(fabs(x1 - x2) < epsilon) {
        printf("prawidlowy wynik\n");
    }else if((fabs(x1 - x2) == epsilon)){
        printf("roznica jest dokladnie 0.000000001\n");
    }else{
        printf("nieprawidlowy wynik");
    }
    // && logiczny and
    // || logiczny or

}

// Napisz program, który oblicza resztê z dzielenia sumy dwóch liczb ca³kowitych przez trzeci¹ liczbê ca³kowit¹.
void zadanie1() {
    int x1 = 4;
    int x2 = 6;
    int x3 = 4;

    printf("Reszta z dzielenia sumy dwoch liczb calkowitych przez trzecia: %d", (x1 + x2) % x3 );
}

// Stwórz program, który oblicza ró¿nicê kwadratów dwóch podanych liczb ca³kowitych.
void zadanie2() {
    int x1 = 3;
    int x2 = 2;

    printf("Roznica kwadratow dwoch podanych liczb calkowitych: %d", (x1 * x1) - (x2 * x2));
}

// Opracuj program, który oblicza iloczyn ró¿nicy dwóch liczb ca³kowitych i trzeciej liczby ca³kowitej.
void zadanie3() {
    int x1 = 3;
    int x2 = 2;
    int x3 = 4;

    printf("Iloczyn dwoch liczb calkowitych i trzeciej liczby calkowitej: %d", (x1 - x2) * x3 );
}

// Zaprojektuj program, który oblicza œredni¹ geometryczn¹ bezwzglêdnych wartoœci trzech podanych liczb ca³kowitych.
void zadanie4() {
    int x1 = 3;
    int x2 = 2;
    int x3 = 4;

    printf("Srednia: %lf", pow(abs(x1 * x2 * x3), 1.0/3.0));
}

// Napisz program, który oblicza kwadrat sumy dwóch podanych liczb ca³kowitych.
void zadanie5() {
    int x1 = 2;
    int x2 = 2;

    printf("Kwadrat sumy: %d", (x1 + x2) * (x1 + x2));
}

// Stwórz program, który oblicza sumê kwadratów trzech podanych liczb ca³kowitych.
void zadanie6() {
    int x1 = 3;
    int x2 = 2;
    int x3 = 4;

    printf("Suma kwadratow trzech podanych liczb calkowitych: %.2lf", pow(x1, 2) + pow(x2, 2) + pow(x3, 2));

}

// Opracuj program, który oblicza, ile razy jedna podana liczba całkowita mieści się w drugiej podanej liczbie całkowitej.
void zadanie7() {
    int liczba1 =15;
    int liczba2 =4;

    printf("Jedna liczba miesci sie w drugiej %d razy", liczba1 / liczba2);
}

// Zaprojektuj program, który oblicza kwadrat różnicy dwóch podanych liczb całkowitych.
void zadanie8(){
    int x1 = 20;
    int x2 = 15;

    printf("Kwadrat roznicy: %d", (x1 - x2) * (x1 - x2));
}

// Napisz program, który oblicza iloraz sumy dwóch liczb całkowitych przez ich różnicę.
void zadanie9() {
    int x = 10;
    int y = 8;

    printf("Iloraz to: %d", (double)(x + y) / (x-y));
}

// Stwórz program, który oblicza sumę trzech kolejnych liczb całkowitych, zaczynając od podanej liczby całkowitej.
void zadanie10() {
    int liczba;

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);

    printf("Suma trzech kolejnych liczb: %d", liczba + (liczba + 1) + (liczba + 2));
}

// Znajdź średnią arytmetyczną trzech liczb zmiennoprzecinkowych.
void zadanie11() {
    double x1 = 2.3;
    double x2 = 4.2;
    double x3 = 6.1;
    printf("Srednia arytmetyczna: %.2lf", (x1 + x2 + x3) / 3);
}

// Zadanie 12
void zadanie12() {
    double a = 2;
    double b = 4.2;
    double c = 1.2;

    printf("Wartosc wyrazenia: %lf", 1 / ((1 / a) + (1 / b) + (1 / c)) );
}

// Zadanie 13
void zadanie13() {
    double x;
    printf("Podaj liczbe: ");
    scanf("%lf", &x);

    printf("Wyliczona wartosc e: %.2lf", 1 + x);
}

// Zadanie 14
void zadanie14() {

}

int main()
{
    // przyklad1();
    // przyklad2();
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
