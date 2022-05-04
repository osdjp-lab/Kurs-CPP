#include <iostream>
using namespace std;

/**
 * Zadanie 4.5
 * --------------------------------------
 * Napisz program pokazujący działanie instrukcji (każda jako osobna funkcja; trzy funkcje od a do c):
 * (a) while    (pokazujące while z inkrementacją: i++, ++i)
 * (b) do-while (pokazujące do-while z inkrementacją: i++, ++i)
 * (c) for
 * - wykorzystaj: break, continue, return
 * Nazwać program: ZadPetle.cc
 */

void whileloop() {
    int i = 0;
    cout << "Pętla while inkrementacja i++: " << endl;
    cout << "[ ";
    while (i <= 10) {
        cout << i++ << " ";
    }
    i = -1;
    cout << "]" << endl;
    cout << "Pętla while inkrementacja ++i: " << endl;
    cout << "[ ";
    while (true) {
        if (i == 10)
            break;
        cout << ++i << " ";
    }
    cout << "]" << endl;
}

void dowhileloop() {
    int i = 0;
    cout << "Pętla do while inkrementacja i++: " << endl;
    cout << "[ ";
    do {
        cout << i++ << " ";
    } while (i <= 10);
    i = -1;
    cout << "]" << endl;
    cout << "Pętla do while inkrementacja ++i: " << endl;
    cout << "[ ";
    do {
        cout << ++i << " ";
        if (i == 10)
            break;
    } while (true);
    cout << "]" << endl;
}

void forloop() {
    cout << "[ ";
    for (int i=0; i<10; i++) {
        if (i > 3 && i < 7) {
            continue;
        } else {
            cout << i << " ";
        }
    }
    cout << "]" << endl;
}

int main() {
    whileloop();
    dowhileloop();
    forloop();
}
