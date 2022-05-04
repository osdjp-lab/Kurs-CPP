#include <iostream>
using namespace std;

/**
 * Zadanie 4.4
 * --------------------------------------
 * Napisz program z użyciem 'switch' wybierajacy do wykonania jedną
 * z trzech funkcji z zadania ZadParzysta.cc:
 * Nazwać program: ZadParzystaCase.cc (kopia ZadParzyste do ZadParzysteCase+switch,
 * lub pominięcie ZadParzyste i umieszczenie wszystkiego w ZadParzystaCase)
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
    int f, a;
    cout << "Wybierz funkcje (1 - operacje bitowe, 2 - modulo, 3 - operator warunkowy): ";
    cin >> f;
    cout << "Podaj liczbe: ";
    cin >> a;
    switch (f)
    {
    case 1:
        print_parity(bit_parity_check(a));
        break;

    case 2:
        print_parity(modulo_parity_check(a));
        break;

    case 3:
        print_parity(conditional_parity_check(a));
        break;

    default:
        break;
    }
}
