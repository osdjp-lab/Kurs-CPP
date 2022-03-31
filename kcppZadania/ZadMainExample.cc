#include <iostream>
#include <string>
using namespace std;

/**
 * Zadanie 1.1
 * --------------------------------------
 * Napisać program który zawiera:
 * - funkcję main
 * - 5 innych funkcji, z czego dwie zadeklarowane jako: extern "C"
 * - wywołując program decydujemy, które z funkcji mają zostać wykonane
 * przez podanie tego w liście argumentów przekazanych do funkcji main
 * Nazwać program: ZadMainExample.cc 
 */

int modulo(int a, int b) {
    return a % b;
}

int suma(int a, int b) {
    return a + b;
}

int roznica(int a, int b) {
    return a - b;
}

extern "C" int iloczyn(int a, int b) {
    return a * b;
}

extern "C" double iloraz (int a, int b) {
    return (double) a / b;
}

int main(int argc, char *argv[]) {
    if (argc == 4) {
        string function = argv[1];
        string arg1 = argv[2];
        string arg2 = argv[3];
        int operation, a, b;
        operation = stoi(function);
        a = stoi(arg1);
        b = stoi(arg2);
        switch (operation) {
            case 0: cout << a << " % " << b << " = " << modulo(a, b) << endl;
                    break;
            case 1: cout << a << " + " << b << " = " << suma(a, b) << endl;
                    break;
            case 2: cout << a << " - " << b << " = " << roznica(a, b) << endl;
                    break;
            case 3: cout << a << " * " << b << " = " << iloczyn(a, b) << endl;
                    break;
            case 4: cout << a << " / " << b << " = " << iloraz(a, b) << endl;
                    break;
        }
        return 0; 
    } if (argc == 2) {
        string arg = argv[1];
        if ((arg == "-h") || (arg == "--help")) {
            cout << "Funkcja słuzy do wykonywania prostych operacji matematycznych na liczbach całkowitych." << endl;
            cout << endl;
            cout << "Zastosowanie: " << argv[0] << " <indeks-funkcji> <pierwsza-liczba-całkowita> <druga-liczba-całkowita>" << endl;
            cout << endl;
            cout << "Indeksy funkcji: " << endl;
            cout << "0 - modulo" << endl;
            cout << "1 - suma" << endl;
            cout << "2 - różnica" << endl;
            cout << "3 - iloczyn" << endl;
            cout << "4 - iloraz" << endl;
            return 0;
        }
        cerr << "Zastosowanie: " << argv[0] << " <indeks-funkcji> <pierwsza-liczba-całkowita> <druga-liczba-całkowita>" << endl;
        return 1;
    } else {
        cerr << "Zastosowanie: " << argv[0] << " <indeks-funkcji> <pierwsza-liczba-całkowita> <druga-liczba-całkowita>" << endl;
        return 1;
    }
}
