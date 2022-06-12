#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**
 * Zadanie 4.1
 * --------------------------------------
 * Napisz program pokazujący funkcjonalność:
 * - wypisywania na ekran,
 * - zapisywanie do strumienie błędów
 * - zapisywania do pliku,
 * - odczytywania z pliku,
 * Nazwać program: ZadCinCoutFile.cc
 */

int main(int argc, char *argv[]) {
    string text;
    cout << "Podaj tekst do zapisania do pliku: " << endl;
    getline(cin, text);
    if (text.empty()) {
        cerr << "Nie podano tekstu do zapisania" << endl;
        return 1;
    }
    ofstream file;
    file.open("ZadCinCoutFile.txt");
    if (file.is_open()) {
        file << text;
        file.close();
    } else {
        cerr << "Nie udało się otworzyć pliku do zapisu" << endl;
        return 1;
    }
    ifstream file2;
    file2.open("ZadCinCoutFile.txt");
    if (file2.is_open()) {
        getline(file2, text);
        cout << "Tekst odczytany z pliku: " << endl;
        cout << text << endl;
        file2.close();
    } else {
        cerr << "Nie udało się otworzyć pliku do odczytu" << endl;
        return 1;
    }
    return 0;
}
