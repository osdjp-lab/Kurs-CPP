#include <iostream>
using namespace std;

/**
 * Zadanie 2.1
 * --------------------------------------
 * Napisać program z czterema funkcjami z których każda zwraca inaczej:
 * 1. Przez wartość
 * 2. Przez referencje
 * 3. Przez wskaźnik
 * 4. Tablice (proszę się zastanowić o co tak naprawę chodzi)
 * Nazwać program: ZadZwracanie.cc
 */

int x;

int fval(int a, int b) {
    return a + b;
}

int& fref(int a, int b) {
    x = a + b;
    return x;
}

int* fptr(int a, int b, int* p) {
    *p = a + b;
    return p;
}

void ftab(int a, int b, int tab[]) {
    tab[0] = a + b;
}

int main() {
    cout << "Suma poprzez wartość: " << fval(1, 2) << endl;
    cout << "Suma poprzez referencję: " << fref(1, 2) << endl;
    int *p = new int;
    cout << "Suma poprzez wskaźnik: " << *fptr(1, 2, p) << endl;
    delete p;
    int tablica[1];
    ftab(1, 2, tablica);
    cout << "Suma poprzez tablicę: " << tablica[0] << endl;
    return 0;
}
