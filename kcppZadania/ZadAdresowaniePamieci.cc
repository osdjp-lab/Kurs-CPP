#include <iostream>
using namespace std;

/**
 * Zadanie 3.1 (LArytmetykaWskaznikowZmienne.cc)
 * --------------------------------------
 * Kierunek adresowania pamięci 
 * - wyjaśnić w komentarzu do programu podającego przykład:
 * - wypisywanie adresów deklarowanych zmiennych
 * Nazwać program: ZadAdresowaniePamieci.cc
 */

int main() {
    // Adresy są przypisywane rosnąco.
    // Przykładowy wynik wywołania programu:
    // Adres pierwszej zadeklarowanej zmiennej: 140720340788776
    // Adres  drugiej  zadeklarowanej zmiennej: 140720340788780
    int a;
	int b;
    unsigned long p;
    p = (unsigned long) &a;
    cout << "Adres pierwszej zadeklarowanej zmiennej: " << p << endl;
    p = (unsigned long) &b;
    cout << "Adres  drugiej  zadeklarowanej zmiennej: " << p << endl;
}
