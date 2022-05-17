#include <iostream>
#include <string>
using namespace std;

/**
 * Zadanie 5.2
 * --------------------------------------
 * Stwórz plik z działająca strukturą:
 * - deklaracja,
 * - definicja obiektów (w dowolny sposób):
 *   - wywołanie,
 *   - zmiana wartości,
 *   - odczyt wartości,
 *   // - czy można stworzyć konstruktor (inicjalizacja wartości
 *   poczatkowych - standard, lista inicjalizacyjna)
 * Nazwać program: ZadStruct.cc
 */

struct DemoStruct {
    DemoStruct() : a(0), b(0.0), c('\0'), d("") {};
    DemoStruct(int a, double b, char c, string d) : a(a), b(b), c(c), d(d) {};
    int a;
    double b;
    char c;
    string d;
};

std::ostream &operator<<(std::ostream &os, const DemoStruct &demo) {
    os << "a: " << demo.a << endl;
    os << "b: " << demo.b << endl;
    os << "c: " << demo.c << endl;
    os << "d: " << demo.d << endl;
    return os;
}

int main() {
    // Inicjalizacja poprzez przypisywanie wartości
    DemoStruct demo1;
    demo1.a = 1;
    demo1.b = 2.2;
    demo1.c = 'a';
    demo1.d = "abc";
    cout << demo1 << endl;
    // Inicjalizacja poprzez agregat
    DemoStruct demo2 = {1, 2.2, 'a', "abc"};
    // Nadpisanie wartości
    demo2.a = 2;
    demo2.b = 4.4;
    demo2.c = 'b';
    demo2.d = "def";
    cout << demo2 << endl;
    // Inicjalizacja poprzez konstruktor domyślny z listą inicjalizacyjną
    DemoStruct demo4 = DemoStruct();
    cout << demo4 << endl;
    // Przypisanie wartości przez konstruktor z listą inicjalizacyjną
    DemoStruct demo5 = DemoStruct(1, 2.2, 'a', "abc");
    cout << demo5 << endl;
    return 0;
}
