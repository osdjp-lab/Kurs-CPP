#include <iostream>
using namespace std;

/**
 * Zadanie 3.3 (LArytmetykaWskaznikow.cc)
 * --------------------------------------
 * Co robia ponizsze operacje? Napisac program ktory pokazuje ich dzialanie.
 * 1. Funkcja1(): Przy deklaracji zmiennych
 * 2. Funkcja2(): Przy deklaracji tablicy
 * p++;
 * ++p;
 * ++*p;
 * ++(*p);
 * ++*(p);
 * *p++;
 * (*p)++;
 * *(p)++;
 * *++p;
 * *(++p);
 *
 * oraz (Funkcja3()) w analogii do LArytmetykaWzkaznikowZmienne.cc aby
 * wypisywal na ekran:
 *
 * 1.  A, B, C: 0  0   0
 * 2.  A, B, C: 0  10  0
 * 3.  A, B, C: 0  10  20
 * 4.  A, B, C: 0  30  20
 * 5.  A, B, C: 40 30  20
 * 6.  A, B, C: 40 50  20
 * 7.  A, B, C: 40 50  60
 * 8.  A, B, C: 40 70  60
 * 9.  A, B, C: 80 70  60
 * 10. A, B, C: 80 90  60
 *
 * przy poczatkowych zmmiennych: int a = 0, b = 0, c = 0;
 * Nazwać program: ZadArytmetykaWskaznikow.cc
 */

typedef unsigned long ul;

#define PR_ADR_VAL(ADRES) \
    cout << "Adres: " << (ul) ADRES << "\tWartość: " << *ADRES << endl;

#define PR_VALS(NR, VAR1, VAR2, VAR3) \
    cout << NR << ".\tA, B, C:\t" << VAR1 << ",\t" << VAR2 << ",\t" << VAR3 << endl;

void Funkcja1() {
    int a, b, c, d, e, f, g; 
    a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 7;
    int* p;
    p = &a;     PR_ADR_VAL(p)
    p++;        PR_ADR_VAL(p)
    ++p;        PR_ADR_VAL(p)
    ++*p;       PR_ADR_VAL(p)
    ++(*p);     PR_ADR_VAL(p)
    ++*(p);     PR_ADR_VAL(p)
    *p++;       PR_ADR_VAL(p)
    (*p)++;     PR_ADR_VAL(p)
    *(p)++;     PR_ADR_VAL(p)
    *++p;       PR_ADR_VAL(p)
    *(++p);     PR_ADR_VAL(p)
}

void Funkcja2() {
    int tab[7] = {1, 2, 3, 4, 5, 6, 7};
    int* p;
    p = tab;    PR_ADR_VAL(p)
    p++;        PR_ADR_VAL(p)
    ++p;        PR_ADR_VAL(p)
    ++*p;       PR_ADR_VAL(p)
    ++(*p);     PR_ADR_VAL(p)
    ++*(p);     PR_ADR_VAL(p)
    *p++;       PR_ADR_VAL(p)
    (*p)++;     PR_ADR_VAL(p)
    *(p)++;     PR_ADR_VAL(p)
    *++p;       PR_ADR_VAL(p)
    *(++p);     PR_ADR_VAL(p)
}

void Funkcja3() {
    int a = 0, b = 0, c = 0;
    int* p = &b;                                    PR_VALS(1, a, b, c)
    *p++ = 10;                                      PR_VALS(2, a, b, c)
    *p-- = 20;                                      PR_VALS(3, a, b, c)
    *p += *(p + 1);                                 PR_VALS(4, a, b, c)
    *(p - 1) = *(p + 1) * 2;                        PR_VALS(5, a, b, c)
    *p += *&c;                                      PR_VALS(6, a, b, c)
    *(p + 1) += *&a;                                PR_VALS(7, a, b, c)
    *&b += 20;                                      PR_VALS(8, a, b, c)
    *((int*)&p - 3) *= 2;                           PR_VALS(9, a, b, c)
    *(int*)(&p - 1) += *(p - 1) - *(p + 1);         PR_VALS(10, a, b, c)
}

int main() {
    cout << "Funkcja1():" << endl;
    Funkcja1();
    cout << "----------------------------------" << endl;
    cout << "Funkcja2():" << endl;
    Funkcja2();
    cout << "----------------------------------" << endl;
    cout << "Funkcja3():" << endl;
    Funkcja3();
}
