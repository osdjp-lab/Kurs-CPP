#include "../include/ZadPreprocesor.h"
using namespace std;

void ZadPreprocesor::fibWithMacro() {
    int m = 0;
    int n = 1;
    int tmp;
    int i = BEGIN;
    while (i <= END) {
        PRINT_VALUE(i, n)
        tmp = m;
        m = n;
        n += tmp;
        i++;
    }
}

void ZadPreprocesor::fibWithoutMacro() {
    int m = 0;
    int n = 1;
    int tmp;
    int i = 0;
    while (i <= 10) {
        cout << n << " " << endl;
        tmp = m;
        m = n;
        n += tmp;
        i++;
    }
}

void ZadPreprocesor::info() {
    cout << "Zadanie 4.7 - ZadPreprocesor" << endl;
}

void ZadPreprocesor::print() {
    cout << "Wywołano funkcje: ";
    PRINT_NAME(fibWithMacro)
    cout << std::endl;
    CALL_FUNCTION(fib, WithMacro);
    cout << "--------------------------" << endl;
    cout << "Wywołano funkcje: ";
    PRINT_NAME(fibWithoutMacro)
    std::cout << std::endl;
    CALL_FUNCTION(fib, WithoutMacro);
}
