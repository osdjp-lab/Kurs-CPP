#include "../include/ZadArytmetykaWskaznikow.h"
using namespace std;

void ZadArytmetykaWskaznikow::Funkcja1() {
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

void ZadArytmetykaWskaznikow::Funkcja2() {
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

void ZadArytmetykaWskaznikow::Funkcja3() {
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

void ZadArytmetykaWskaznikow::info() {
    cout << "Zadanie 3.3 - ZadArytmetykaWskaznikow" << endl;
}

void ZadArytmetykaWskaznikow::print() {
    cout << "Funkcja1():" << endl;
    Funkcja1();
    cout << "----------------------------------" << endl;
    cout << "Funkcja2():" << endl;
    Funkcja2();
    cout << "----------------------------------" << endl;
    cout << "Funkcja3():" << endl;
    Funkcja3();
}
