#include "../include/LManipulacjaStrumieniemCout.h"
using namespace std;

void LManipulacjaStrumieniemCout::info() {
    cout << "Zadanie 4.0 - LManipulacjaStrumieniemCout" << endl;
}

void LManipulacjaStrumieniemCout::print() {
    double pi = 22.0/7.0;
    cout << "Wynik naszego działania: " << pi << " jest niepoprawny ale:" << endl;
    cout << setfill(' ') << setw(10) << "output:" << setw(9) << setprecision(5) << 4*pi << setw(6) << "T:" << setw(7) <<    setprecision(4) << pi << endl;
    cout << setfill(' ') << setw(11) << "output1:" << setw(9) << setprecision(5) << pi << setw(5) << "T:" << setw(9)  <<    setprecision(7) << 4*pi << endl;
    cout << setfill(' ') << setw(11) << "output2:" << setw(9) << setprecision(5) << pi << setw(5) << "T:" << setw(10) <<    setprecision(8) << 4*pi << endl;
    cout << setfill(' ') << setw(3) << "" << setfill('-') << setw(33) << "" << endl;
    cout << setfill(' ') << setw(11) << "average:" << setw(9) << setprecision(6) << 6*pi << setw(5) << "T:" << setw(10) <<  setprecision(8) << 6*pi << endl;
}
