#include <iostream>
using namespace std;

/*
 * Napisz program sprawdzający wartości inicjalizacyjne zmiennych
 * oraz sposobów wykorzystania wartości zwracanej przez funkcję.
 */

int funkcja() {
    int wynik, A, B;
    A = 1;
    B = 2;
    wynik = A + B;
    return wynik;
}

int main() {
    int a;
    bool b;
    cout << "Po deklaracji:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << endl;
    a = 5;
    b = true;
    cout << "Po przypisaniu wartosci:" << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "Wartosc z funkcji:" << endl;
    cout << endl;
    int w;
    w = funkcja();
    cout << "Wartosc przypisana do zmiennej: " << w << endl;
    cout << "Wartosc z funkcji: " << funkcja() << endl;
    return 0;
}
