#include <iostream>
using namespace std;

/**
 * Zadanie 4.7
 * --------------------------------------
 * Napisz program pokazujący zastosowanie dyrektywy preprocesora:
 *   '#ifdef' (#else)
 *   '#ifndef'
 * oraz
 *   '#define':
 *   (a) użycie makra
 *   (b) uzycie '#' i '##'
 *   (a) i (b) stwórz także dla porównania bez dyrektywy preprocesora
 * Nazwać program: ZadPreprocesor.cc
 */

#define DEBUG 1

#define PRINT_NAME(function_name) cout << #function_name;
#define CALL_FUNCTION(func, type) func##type();

#define BEGIN 0
#define END 10

#ifdef DEBUG
#define PRINT_VALUE(i, n) cout << "fib[" << i << "] = " << n << endl;
#else
#define PRINT_VALUE(i, n) cout << n << " " << endl;
#endif

void fibWithMacro() {
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

void fibWithoutMacro() {
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

int main() {
    cout << "Wywołano funkcje: ";
    PRINT_NAME(fibWithMacro)
    cout << endl;
    CALL_FUNCTION(fib, WithMacro);
    cout << "--------------------------" << endl;
    cout << "Wywołano funkcje: ";
    PRINT_NAME(fibWithoutMacro)
    cout << endl;
    CALL_FUNCTION(fib, WithoutMacro);
}
