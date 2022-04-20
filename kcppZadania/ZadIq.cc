#include <iostream>
using namespace std;

/**
 * Zadanie 3.2 (LArytmetykaWskazikow.cc)
 * --------------------------------------
 * Wyjaśnić i[q] gdy i jest 'int', a q jest wskaźnikiem na tablice
 * - wyjaśnienie  w komentarzu w treści programu!!!!
 * - przykład zastosowania
 * Nazwać program: ZadIq.cc
 */

int main() {
    int i = 4;
    int q[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Implementacja x[y] jest równoważna z *((x)+(y)).
    // W standardzie C++ w definicji indeksowania tablic
    // jedna z wartości musi być wskaźnikiem na typ zawarty w tablicy
    // a druga musi być wartością typu int lub bezzakresową wartością enum.
    // Kolejność wartości nie ma znaczenia.
    cout << "q[i]   = " << q[i] << endl;
    cout << "*(q+i) = " << *(q+i) << endl;
    cout << "i[q]   = " << i[q] << endl;
    cout << "*(i+q) = " << *(i+q) << endl;
}
