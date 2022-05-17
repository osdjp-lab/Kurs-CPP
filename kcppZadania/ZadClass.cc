#include <iostream>
using namespace std;

/**
 * Zadanie 5.1
 * --------------------------------------
 * Napisz prosty program z klasą
 * - metody deklarowane i definiowane w klasie
 * - metody deklarowane w klasie, a definiowane poza klasą
 * - zastosowanie 3 sekcji: public, private, protected
 * - zmienne w każdej z sekcji
 * - funkcje, które mają dostęp do zmiennych z sekcji
 * protected i private
 * - funkcje inline
 * Nazwać program: ZadClass.cc
 */

class DemoClass {
    public:
        int public_var;
        inline int public_func() {
            return public_var;
        }
        int public_func_with_args(int a, int b);

    private:
        int private_var;
        inline int private_func() {
            return private_var;
        }
        int private_func_with_args(int a, int b);

    protected:
        int protected_var;
        inline int protected_func() {
            return protected_var;
        }
        int protected_func_with_args(int a, int b);

};

int DemoClass::public_func_with_args(int a, int b) {
    return a + b;
}

int DemoClass::private_func_with_args(int a, int b) {
    return a + b;
}

int DemoClass::protected_func_with_args(int a, int b) {
    return a + b;
}

int main() {
    DemoClass demo;
    cout << "public_var: " << demo.public_var << endl;
    cout << "public_func: " << demo.public_func() << endl;
    cout << "public_func_with_args: " << demo.public_func_with_args(1, 2) << endl;
    return 0;
}
