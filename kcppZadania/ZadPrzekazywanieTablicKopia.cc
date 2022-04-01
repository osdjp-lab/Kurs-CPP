#include <iostream>
using namespace std;

/**
 * Zadanie 2.3
 * --------------------------------------
 * Napisz program przekazujący kopię tablicy (Czy da się przekazać kopię?)
 * Nazwać program: ZadPrzekazywanieTablicKopia.cc
 */

typedef struct {
    int t[3];
} table;

void print_table(table x) {
    int size = sizeof(x.t)/sizeof(x.t[0]);
    cout << "[";
    for (int i=0; i<size-1; i++) {
        cout << x.t[i] << ", ";
    }
    cout << x.t[size-1] << "]" << endl;
}

void copy_test(table x) {
    x.t[0] = 10;
    x.t[1] = 20;
    x.t[2] = 30;
    cout << "We funkcji po podstawieniu wartości:" << endl;
    print_table(x);
}

int main() {
    table tab = {1, 2, 3};
    cout << "Przed:" << endl;
    print_table(tab);
    cout << "--------------------------------" << endl;
    copy_test(tab);
    cout << "--------------------------------" << endl;
    cout << "Po:" << endl;
    print_table(tab);
    return 0;
}