#include <iostream>
using namespace std;

/*
 * Napisz program ze zdefiniowanymi własnymi typami danych.
 */

typedef int custom_int;
typedef bool custom_bool;

int main() {
    custom_int a = 5;
    custom_bool b = true;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}
