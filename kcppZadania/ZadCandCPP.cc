#include <iostream>
#include <iomanip>
using namespace std;

/**
 * Zadanie 4.2
 * --------------------------------------
 * Napisz program:
 * - pokazujący wykonanie tych samych operacji w c i c++ (kcpp02::34)
 * Nazwać program: ZadCandCPP.cc
 */

#define COLUMN_WIDTH 40

int main() {
    cout << setw(COLUMN_WIDTH) << left << "Elementy / Operacje" << setw(COLUMN_WIDTH) << left << "C" << "C++" << endl;
    cout << setfill('-') << setw(90) << "" << setfill(' ') << endl;
    cout << endl;

    // Pliki nagłówkowe dla operacji wejścia/wyjścia w C i C++
    cout << left << "Pliki nagłówkowe:" << endl;
    cout << setfill('-') << setw(20) << "" << setfill(' ') << endl;
    cout << setw(COLUMN_WIDTH) << left << "" << setw(COLUMN_WIDTH) << left << "#include <stdio.h>" << "#include <iostream>" << endl;
    cout << setw(2*COLUMN_WIDTH) << left << "" << "#include <iomanip>" << endl;
    cout << endl;

    // Wejście
    cout << left << "Wejście:" << endl;
    cout << setfill('-') << setw(10) << "" << setfill(' ') << endl;
    cout << "Zmienne do wczytywania danych muszą być wcześniej zadeklarowane." << endl;
    cout << setfill('-') << setw(10) << "" << setfill(' ') << endl;
    cout << endl;
    // char
    cout << setw(COLUMN_WIDTH) << left << "char" << setw(COLUMN_WIDTH) << left << "scanf(\"%c\", &varChar);" << "cin >> noskipsws >> varChar;"  << "" << endl;
    cout << setw(COLUMN_WIDTH) << left << "" << setw(COLUMN_WIDTH) << left << "scanf(\" %c\", &varChar);" << "cin >> skips >> varHexInt;" << endl;
    // string
    cout << setw(COLUMN_WIDTH) << left << "string" << setw(COLUMN_WIDTH) << left << "scanf(\"%s\", &varString);" << "cin >> varStr;" << endl;
    // integer
    cout << setw(COLUMN_WIDTH) << left << "integer" << setw(COLUMN_WIDTH) << left << "scanf(\"%i\", &varInteger);" << "cin >> varInt;" << endl;
    cout << setw(COLUMN_WIDTH) << left << "" << setw(COLUMN_WIDTH) << left << "scanf(\"%x\", &varHexInteger);" << "cin >> varHexInt;" << endl;
    // double
    cout << setw(COLUMN_WIDTH) << left << "double" << setw(COLUMN_WIDTH) << left << "scanf(\"%lf\", &varDouble);" << "cin >> varDouble;" << endl;
    cout << endl;

    // Wyjście
    cout << left << "Wyjście:" << endl;
    cout << setfill('-') << setw(10) << "" << setfill(' ') << endl;
    // char
    cout << setw(COLUMN_WIDTH) << left << "char" << setw(COLUMN_WIDTH) << left << "printf(\"%c\", 'a');" << "cout << \'a\';"  << "" << endl;
    // string
    cout << setw(COLUMN_WIDTH) << left << "string" << setw(COLUMN_WIDTH) << left << "printf(\"%s\", \"napis\");" << "cout << \"napis\";" << endl;
    // newline
    cout << setw(COLUMN_WIDTH) << left << "newline" << setw(COLUMN_WIDTH) << left << "printf(\"\\n\");" << "cout << endl;" << endl;
    // integer
    cout << setw(COLUMN_WIDTH) << left << "integer" << setw(COLUMN_WIDTH) << left << "printf(\"%i\", 10);" << "cout << 10;" << endl;
    cout << setw(COLUMN_WIDTH) << left << "" << setw(COLUMN_WIDTH) << left << "printf(\"%x\", 10);" << "cout << hex << 10;" << endl;
    // double
    cout << setw(COLUMN_WIDTH) << left << "double" << setw(COLUMN_WIDTH) << left << "printf(\"%f\", 3.14);" << "cout << 3.14;" << endl;
    cout << setw(COLUMN_WIDTH) << left << "" << setw(COLUMN_WIDTH) << left << "printf(\"%4.2f\", 22.0/7.0);" << "cout << setprecision(3) << 22.0/7.0;" << endl;
    cout << endl;

    // Błąd
    cout << left << "Błąd:" << endl;
    cout << setfill('-') << setw(10) << "" << setfill(' ') << endl;
    cout << setw(COLUMN_WIDTH) << left << "" << setw(COLUMN_WIDTH) << left << "fprintf(stderr, \"Komunikat\");" << "cerr << \"Komunikat\";" << endl;
}
