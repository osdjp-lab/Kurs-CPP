#include "../include/ZadParzysta.h"
using namespace std;

bool ZadParzysta::bit_parity_check(int a) {
    return !(a & 1);
}

bool ZadParzysta::modulo_parity_check(int a) {
    return !(a % 2);
}

bool ZadParzysta::conditional_parity_check(int a) {
    return (a & 1) ? 0 : 1;
}

void ZadParzysta::print_parity(bool p) {
    if (p)
        cout << "Liczba jest parzysta" << endl;
    else
        cout << "Liczba jest nieparzysta" << endl;
}

void ZadParzysta::info() {
    cout << "Zadanie 4.3 - ZadParzysta" << endl;
}

void ZadParzysta::print() {
    int a;
    cout << "Podaj liczbe: ";
    cin >> a;
    print_parity(bit_parity_check(a));
    print_parity(modulo_parity_check(a));
    print_parity(conditional_parity_check(a));
}