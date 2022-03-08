#include <iostream>
using namespace std;

/**
 * Zadanie 2.2
 * --------------------------------------
 * Napisz program przekazujący tablice z zachowaniem rozmiaru
 * Nazwać program: ZadPrzekazywanieTablic.cc
 */

const int SIZE = 10;
int seq_table[SIZE];

void print_arr(int* table, int size) {
    cout << "[";
    for (int i=0; i<size-1; i++) {
        cout << table[i] << ", ";
    }
    cout << table[size-1] << "]" << endl;
}

void fib_seq(int* table, int size) {
    table[0] = 0;
    table[1] = 1;
    for (int i=2; i<size; i++) {
        table[i] = table[i-2] + table[i-1];
    }
}

int main() {
    print_arr(seq_table, SIZE);
    fib_seq(seq_table, SIZE);
    print_arr(seq_table, SIZE);
    return 0;
}
