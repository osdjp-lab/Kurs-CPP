#include <iostream>
#include <iomanip>
using namespace std;

/**
 * Zadanie 4.0
 * --------------------------------------
 * Napisz program z przykładami manipulacji strumieniem cout:
 * - setw, setprecision, setfill, fixed, scientific, hex, dec... etc
 * (patrz plik kcpp02.pdf)
 * Nazwać program: LManipulacjaStrumieniemCout.cc
 * 
 * Spraw aby na ekran wypisało to co jest pomiedzy liniami ze znakami =:
 * ==================================================
 * Wynik naszego działania: x.xxxxx jest niepoprawny ale:
 *    output:   xx.xxx    T:  x.xxx 
 *    output1:   x.xxxx   T: xx.xxxxx
 *    output2:   x.xxxx   T: xx.xxxxxx
 *    ---------------------------------
 *    average:  xx.xxxx   T: xx.xxxxxx
 * ==================================================
 * - x.xxxx są wynikami jakiś działań, a nie sztucznie wstawionymi liczbami
 * - ustawienie liczb/wypisanie/sformatowanie wykonać używając manipulatorow
 * strumieniem (setw, setprecision, setfill etc), zamiast " "
 */

int main() {
    double pi = 22.0/7.0;
    cout << "Wynik naszego działania: " << pi << " jest niepoprawny ale:" << endl;
    cout << setfill(' ') << setw(10) << "output:" << setw(9) << setprecision(5) << 4*pi << setw(6) << "T:" << setw(7) << setprecision(4) << pi << endl;
    cout << setfill(' ') << setw(11) << "output1:" << setw(9) << setprecision(5) << pi << setw(5) << "T:" << setw(9)  << setprecision(7) << 4*pi << endl;
    cout << setfill(' ') << setw(11) << "output2:" << setw(9) << setprecision(5) << pi << setw(5) << "T:" << setw(10) << setprecision(8) << 4*pi << endl;
    cout << setfill(' ') << setw(3) << "" << setfill('-') << setw(33) << "" << endl;
    cout << setfill(' ') << setw(11) << "average:" << setw(9) << setprecision(6) << 6*pi << setw(5) << "T:" << setw(10) << setprecision(8) << 6*pi << endl;
}
