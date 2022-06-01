#include <iostream>

#ifndef ZAD_AR_WSK_H
#define ZAD_AR_WSK_H

typedef unsigned long ul;

#define PR_ADR_VAL(ADRES) \
    std::cout << "Adres: " << (ul) ADRES << "\tWartość: " << *ADRES << std::endl;

#define PR_VALS(NR, VAR1, VAR2, VAR3) \
    std::cout << NR << ".\tA, B, C:\t" << VAR1 << ",\t" << VAR2 << ",\t" << VAR3 << std::endl;

class ZadArytmetykaWskaznikow {
    private:
        void Funkcja1();
        void Funkcja2();
        void Funkcja3();
    public:
        void info();
        void print();
};

#endif
