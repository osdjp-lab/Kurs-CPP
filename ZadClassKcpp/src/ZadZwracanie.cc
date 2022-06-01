#include "../include/ZadZwracanie.h"
using namespace std;

int ZadZwracanie::fval(int a, int b) {
    return a + b;
}

int& ZadZwracanie::fref(int a, int b) {
    x = a + b;
    return x;
}

int* ZadZwracanie::fptr(int a, int b, int* p) {
    *p = a + b;
    return p;
}

void ZadZwracanie::ftab(int a, int b, int tab[]) {
    tab[0] = a + b;
}

void ZadZwracanie::info() {
    cout << "Zadanie 2.1 - ZadZwracanie" << endl;
}

void ZadZwracanie::print() {
    cout << "Suma poprzez wartość: " << fval(1, 2) << endl;
    cout << "Suma poprzez referencję: " << fref(1, 2) << endl;
    int *p = new int;
    cout << "Suma poprzez wskaźnik: " << *fptr(1, 2, p) << endl;
    delete p;
    int tablica[1];
    ftab(1, 2, tablica);
    cout << "Suma poprzez tablicę: " << tablica[0] << endl;
}