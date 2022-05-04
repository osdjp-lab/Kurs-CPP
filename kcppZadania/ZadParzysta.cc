#include <iostream>
using namespace std;

/**
 * Zadanie 4.3
 * --------------------------------------
 * Napisz program sprawdzający czy liczba jest parzysta/nieparzysta:
 * - trzy funkcje:
 *   (a) w jednej sprawdzamy z wykorzystaniem operacji bitowych (&);
 *   (b) w drugiej inaczej (eg. modulo)
 *   (c) w trzeciej sprawdzenie z użyciem operatora warunkowego zamiast
 * if (lub jako warunek w if: TRUE || FALSE; (... ? 0 : 1))
 * - w kodzie funkcji (a) proszę rozpisać jako komentarz przykładowe sprawdzenie
 * Nazwać program: ZadParzysta.cc
 */

bool bit_parity_check(int a) {
    return !(a & 1);
}

bool modulo_parity_check(int a) {
    return !(a % 2);
}

bool conditional_parity_check(int a) {
    return (a & 1) ? 0 : 1;
}

void print_parity(bool p) {
    if (p)
        cout << "Liczba jest parzysta" << endl;
    else
        cout << "Liczba jest nieparzysta" << endl;
}

int main() {
    int a;
    cout << "Podaj liczbe: ";
    cin >> a;
    print_parity(bit_parity_check(a));
    print_parity(modulo_parity_check(a));
    print_parity(conditional_parity_check(a));
}
