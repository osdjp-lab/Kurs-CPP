#include <iostream>
using namespace std;

/**
 * Zadanie 5.3
 * --------------------------------------
 * Pokaż działanie uni (niebezpieczenstwa, bledy)
 * Nazwać program: ZadUnia.cc
 */

union DemoUnion {
    int a;
    double b;
};

int main() {
    DemoUnion demo;
    // Przypisanie wartości do a
    demo.a = 1;
    cout << "a: " << demo.a << endl;
    // Odczyt błędnej wartości w przypadku b
    cout << "b: " << demo.b << endl;
    // Przypisanie wartości do b
    demo.b = 2.2;
    cout << "b: " << demo.b << endl;
    // Odczyt błędnej wartości w przypadku a
    cout << "a: " << demo.a << endl;
    return 0;
}
