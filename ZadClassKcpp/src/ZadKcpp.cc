#include "../include/ZadKcpp.h"
using namespace std;

int ZadKcpp::sekcja() {
    cout << "Wybierz sekcje: ";
    int sekcja;
    cin >> sekcja;
    return sekcja;
}

int ZadKcpp::zadanie() {
    cout << "Wybierz zadanie: ";
    int wybor;
    cin >> wybor;
    return wybor;
}

void ZadKcpp::menu() {
    cout << "Zadania:" << endl;
    zadZwracanie.info();
    zadArytmetykaWskaznikow.info();
    lManipulacjaStrumieniemCout.info();
    zadParzysta.info();
    zadPreprocesor.info();    
    int sekcja = this->sekcja();
    int zadanie = this->zadanie();
    if (sekcja == 2) {
        if (zadanie == 1) {
            zadZwracanie.print();
        } else {
            cout << "Nie ma takiego zadania" << endl;
        }
    } else if (sekcja == 3) {
        if (zadanie == 3) {
            zadArytmetykaWskaznikow.print();
        } else {
            cout << "Nie ma takiego zadania" << endl;
        }
    } else if (sekcja == 4) {
        if (zadanie == 0) {
            lManipulacjaStrumieniemCout.print();
        } else if (zadanie == 3) {
            zadParzysta.print();
        } else if (zadanie = 7) {
            zadPreprocesor.print();
        } else {
            cout << "Nie ma takiego zadania" << endl;
        }
    } else {
        cout << "Nie ma takiej sekcji" << endl;
    }
}
