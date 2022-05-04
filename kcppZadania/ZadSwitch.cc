#include <iostream>
#include <string>
using namespace std;

/**
 * Zadanie 4.6
 * --------------------------------------
 * Napisz program wykorzystujący instrukcje 'switch' gdzie:
 * - zamiast pojedynczego znaku będzie sprawdzane całe słowo
 * - program może być uszczegółowieniem/modyfikacją
 * (zrobić kopie pliku i zmienić kopie) tego co jest w ZadParzysteCase.cc
 * Nazwać program: ZadSwitch.cc
 */

int main() {
    string word;
    cout << "Podaj dowolne słowo: ";
    cin >> word;
    switch (word[0]) {
    case 't':
        switch (word[1]) {
        case 'a':
            switch (word[2]) {
            case 'k':
                cout << "Podano słowo: tak" << endl;
                break;

            default:
                cout << "Podano błędne słowo." << endl;
                break;
            }
            break;

        default:
            cout << "Podano błędne słowo." << endl;
            break;
        
        }
        break;

    case 'n':
        switch (word[1]) {
        case 'i':
            switch (word[2]) {
            case 'e':
                cout << "Podano słowo: nie" << endl;
                break;

            default:
                cout << "Podano błędne słowo." << endl;
                break;
            }
            break;

        default:
            cout << "Podano błędne słowo." << endl;
            break;
        }
        break;
    
    default:
        cout << "Podano błędne słowo." << endl;
        break;
    }
}
