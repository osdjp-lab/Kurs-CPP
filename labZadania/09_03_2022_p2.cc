#include <iostream>
using namespace std;

/*
 * Napisz program z definicją funkcji dodatkowej znajdującą
 * się po funkcji main. 
 */

int funkcja();

int main() {
    cout << funkcja() << endl;
    return 0;
}

int funkcja() {
    return 5;
}
