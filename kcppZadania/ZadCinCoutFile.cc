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
    file << text;
    file.close();
    ifstream file2;
    file2.open("ZadCinCoutFile.txt");
    getline(file2, text);
    cout << "Zapisany tekst: " << text << endl;
    file2.close();
    return 0;
}
