#include <iostream>
using namespace std;

/**
 * Zadanie 5.4
 * --------------------------------------
 * Stwórz klase (program: ZadKlasaKonstruktor.cc) oraz structure (program: ZadStructKonstruktor.cc) z przykładami konstruktorów i 
 * inicializacją zmiennych:
 * - domyślny konstruktor,
 * - domyślny destruktor,
 * - konstruktor z niepustą liczbą zmiennych argumentów
 * - inicjalizacja zmiennych:
 *   + 'standardowa',
 *   + inicjalizacyjna za pomocą listy inicjalizacyjnej
 */

struct DemoStruct {
    int a;
    double b;
    char c;
    string d;
    DemoStruct() : a(0), b(0.0), c('\0'), d("") {};
    DemoStruct(int a, double b, char c, string d) : a(a), b(b), c(c), d(d) {};
    ~DemoStruct() {};
};

std::ostream &operator<<(std::ostream &os, const DemoStruct &demo) {
    os << "a: " << demo.a << endl;
    os << "b: " << demo.b << endl;
    os << "c: " << demo.c << endl;
    os << "d: " << demo.d << endl;
    return os;
}

int main() {
    DemoStruct demo1;
    cout << demo1 << endl;
    DemoStruct demo2 = {1, 2.2, 'a', "abc"};
    cout << demo2;
    return 0;
}