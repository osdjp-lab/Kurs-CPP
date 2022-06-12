#include <iostream>
using namespace std;

/**
 * Zadanie 3.4 (LArytmetykaWskaznikowTablice.cc)
 * --------------------------------------
 * Zaproponuj inne dwa sposoby wyboru wywołania funkcji
 * Nazwać program: ZadWywolanieFunkcji.cc 
 */

void funA() {
    cout << "Wywołano funA()" << endl;
}

void funB() {
    cout << "Wywołano funB()" << endl;
}

int main(int argc, char *argv[]) {
    if (argc == 1) {
        char choice;
        cout << "Wybierz funkcje do wywołania: " << endl;
        cout << "1 - funA()" << endl;
        cout << "2 - funB()" << endl;
        cin >> choice;
        switch (choice) {
            case '1':
                funA();
                break;
            case '2':
                funB();
                break;
            default:
                cout << "Brak takiej opcji" << endl;
                break;
        }
    } else if (argc == 2) {
        if (argv[1] == string("funA")) {
            funA();
        } else if (argv[1] == string("funB")) {
            funB();
        } else {
            cout << "Brak takiej opcji" << endl;
        }
    } else {
        cout << "Podano niewłaściwą liczbę argumentów" << endl;
    }
    return 0;
}
