#include <iostream>
using namespace std;

/**
 * Zadanie 5.5
 * --------------------------------------
 * Sprawdzić działanie przyjaźni klas:
 * - Klasa B zaprzyjaźniona z klasą A ma dostęp do składników prywatnych
 * - Czy klasa A w tym samym momencie może być także zaprzyjaźniona z klasą B?
 *     
 * Friendship is not mutual. If class A is a friend of B,
 * then B doesn’t become a friend of A automatically.
 * https://www.geeksforgeeks.org/friend-class-function-cpp/
 * Nazwać program: ZadKlasyZaprzyjaznione.cc 
 */

class A {
    private:
        int a;
    public:
        A(int a) {
            this->a = a;
        }
        int getA() {
            return a;
        }
        friend class B;
};

class B {
    private:
        int b;
    public:
        B(int b) {
            this->b = b;
        }
        int getB() {
            return b;
        }
        void printAa(A &a) {
            cout << a.a << endl;
        }
};

int main() {
    A a(1);
    B b(2);
    // Sprawdzenie czy klasa B ma dostęp do składników prywatnych klasy A
    b.printAa(a);
    return 0;
}
