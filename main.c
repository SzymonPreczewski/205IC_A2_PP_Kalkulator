#include <stdio.h>

int main() {

    float x;
    float y;
    char znak;
    float wynik;

    printf("Wpisz działanie:+,-,*,/");


    scanf("%f", &x);
    scanf("%c", &znak);
    scanf("%f", &y);

    if (znak == '+') {
        wynik = x + y;

        printf("wynik działania: %.1f", wynik);

    } else if (znak == '-') {
        wynik = x - y;

        printf("wynik działania: %.1f", wynik);

    } else if (znak == '*') {
        wynik = x * y;

        printf("wynik działania:%1.f", wynik);

    } else if (znak == '/') {
        wynik = x / y;

        printf("wynik działania:%1.f", wynik);

    }


    return 0;


}
