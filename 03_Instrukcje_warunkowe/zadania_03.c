#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Napisz program, który prosi u¿ytkownika o wprowadzenie liczby ca³kowitej. Program powinien wyœwietliæ informacjê, czy wprowadzona liczba jest dodatnia, ujemna czy równa zero.
void zadanie1() {
    int liczba1;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba1);

    if(liczba1 > 0){
        printf("Liczba jest dodatnia");
    }else if(liczba1 < 0){
        printf("Liczba jest ujemna");
    }else{
        printf("Liczba jest rowna zero");
    }
}

// Napisz program, który przyjmuje od u¿ytkownika dwie liczby ca³kowite i wyœwietla wiêksz¹ z nich.
void zadanie2() {
    int x1, x2;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &x1);

    printf("Podaj druga liczbe: ");
    scanf("%d", &x2);

    int wieksza = (x1 > x2) ? x1 : x2;
    printf("Wieksza liczba to %d", wieksza);

}

// Napisz program, który prosi o wprowadzenie oceny w skali od 1 do 5. Program powinien wyœwietliæ opis oceny: niedostateczny (1), dopuszczaj¹cy (2), dostateczny (3), dobry (4), bardzo dobry (5). Dla liczby spoza zakresu, program powinien wyœwietliæ komunikat o b³êdzie.
void zadanie3() {
    int przedzial;

    printf("Podaj ocene w skali od 1 do 5: ");
    scanf("%d", &przedzial);

    switch (przedzial) {
        case 1:
            printf("niedostateczny");
            break;
        case 2:
            printf("dopuszczajacy");
            break;
        case 3:
            printf("dostateczny");
            break;
        case 4:
            printf("dobry");
            break;
        case 5:
            printf("bardzo dobry");
            break;
        default:
            printf("Blad! Liczba spoza zakresu.");
    }

}

// Napisz program, który prosi u¿ytkownika o wprowadzenie trzech ró¿nych liczb ca³kowitych i wyœwietla najmniejsz¹ z nich.
void zadanie4() {
    int x1, x2, x3;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &x1);

    printf("Podaj druga liczbe: ");
    scanf("%d", &x2);

    printf("Podaj trzecia liczbe: ");
    scanf("%d", &x3);

    if(x1 > x2 && x3){
        printf("%d");
    }else if(x2 > x1 && x3){
        printf("%d");
    }else{
        printf("%d");
    }
}

// Napisz program, który pyta u¿ytkownika o rok i sprawdza, czy podany rok jest rokiem przestêpnym. Rok przestêpny to taki, który jest podzielny przez 4, ale nie jest podzielny przez 100, chyba ¿e jest te¿ podzielny przez 400.
void zadanie5() {
    int rok;

    printf("Podaj rok: ");
    scanf("%d", &rok);

    if((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)){
        printf("Rok jest przestepny!");
    }else {
        printf("Rok nie jest przestepny");
    }
}

// Napisz program, który przyjmuje od u¿ytkownika dwie liczby ca³kowite i wyœwietla informacjê, czy suma obu liczb jest parzysta czy nieparzysta.
void zadanie6() {
    int liczba1, liczba2;

    printf("Podaj liczbe: ");
    scanf("%d", &liczba1);

    printf("Podaj liczbe: ");
    scanf("%d", &liczba2);

    printf("Suma obu liczb jest: %s\n", ((liczba1 + liczba2) % 2 == 0) ? "Liczba parzysta" : "Liczba nieparzysta");
    //%s(string)
}

// Zadanie 7
void zadanie7() {
    double a, b, c, delta, x1, x2;

    printf("Podaj wspolczynnik a: ");
    scanf("%lf", &a);

    printf("Podaj wspolczynnik b: ");
    scanf("%lf", &b);

    printf("Podaj wspolczynnik c: ");
    scanf("%lf", &c);

    if (a == 0) {
        printf("To nie jest rownanie kwadratowe (wspolczynnik 'a' nie moze byc zerem)!\n");
    } else {
        delta = (b * b) - (4 * a * c);
        printf("Delta wynosi: %.2lf\n", delta);

        if (delta > 0) {
            x1 = (-b - sqrt(delta)) / (2 * a);
            x2 = (-b + sqrt(delta)) / (2 * a);
            printf("Rownanie ma dwa rozwiazania: x1 = %.2lf, x2 = %.2lf\n", x1, x2);

        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Rownanie ma jedno rozwiazanie: x0 = %.2lf\n", x1);

        } else {
            printf("Delta jest ujemna - brak rozwiazan rzeczywistych.\n");
        }
    }
}

// Napisz program, który przyjmuje dwie liczby ca³kowite jako wejœcie od u¿ytkownika i u¿ywa operatora warunkowego, aby znaleŸæ i wyœwietliæ najwiêksz¹ z nich.
void zadanie8() {
    int x1, x2;

    printf("Podaj liczbe: ");
    scanf("%d", &x1);

    printf("Podaj liczbe: ");
    scanf("%d", &x2);

    int wynik = (x1 > x2) ? x1:x2;
    printf("Najwieksze z nich to %d", wynik);
}

// Napisz program, który przyjmuje trzy liczby ca³kowite jako wejœcie od u¿ytkownika i u¿ywa operatora warunkowego, aby znaleŸæ i wyœwietliæ najmniejsz¹ z nich.
void zadanie9() {
    int x1, x2, x3, min;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &x1);

    printf("Podaj druga liczbe: ");
    scanf("%d", &x2);

    printf("Podaj trzecia liczbe: ");
    scanf("%d", &x3);

    min = (x1 < x2) ? ((x1 < x3) ? x1 : x3) : ((x2 < x3) ? x2 : x3);

    printf("Najmniejsza z podanych liczb to: %d\n", min);
}

// U¿ywaj¹c operatora warunkowego ?, napisz program, który przyjmuje od u¿ytkownika jedn¹ liczbê ca³kowit¹ i wyœwietla “parzysta” lub “nieparzysta” w zale¿noœci od wartoœci liczby
void zadanie10() {
    int liczba;

    printf("Podaj liczbe calkowita: ");
    scanf("%d", &liczba);

    printf("Podana liczba jest: %s\n", (liczba % 2 == 0) ? "parzysta" : "nieparzysta");
}

// Stwórz program, który prosi o wprowadzenie dwóch liczb zmiennoprzecinkowych i u¿ywa operatora warunkowego, aby wyœwietliæ, która z nich jest wiêksza, lub czy s¹ równe z dok³adnoœci¹ do dwóch miejsc po przecinku.
void zadanie11() {
    double a, b;

    printf("Podaj pierwsza liczbe: ");
    scanf("%lf", &a);

    printf("Podaj druga liczbe: ");
    scanf("%lf", &b);

    printf("Wynik: %s\n", (fabs(a - b) < 0.01) ? "Liczby sa rowne" : ((a > b) ? "Pierwsza jest wieksza" : "Druga jest wieksza"));
}

// U¿ywaj¹c operatora warunkowego, napisz program, który prosi u¿ytkownika o wprowadzenie oceny w skali od 0 do 100 i wyœwietla “Zdane”, jeœli ocena jest wiêksza lub równa 51, lub “Nie zdane” w przeciwnym przypadku.
void zadanie12() {
    int ocena;

    printf("Podaj ocene w skali od 0 do 100: ");
    scanf("%d", &ocena);

    printf("Wynik: %s\n", (ocena >= 51) ? "Zdane" : "Nie zdane");
}

// Napisz program, który przyjmuje rok jako wejœcie od u¿ytkownika i za pomoc¹ operatora warunkowego sprawdza, czy jest to rok przestêpny. Program powinien wyœwietlaæ “Rok przestêpny” lub “Rok nieprzestêpny” w zale¿noœci od wyniku.
void zadanie13() {
    int rok;

    printf("Podaj rok: ");
    scanf("%d", &rok);

    printf("%s\n", ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) ? "Rok przestepny" : "Rok nieprzestepny");
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
    // zadanie8();
    // zadanie9();
    // zadanie10();
    // zadanie11();
    // zadanie12();
    // zadanie13();


    return 0;
}
