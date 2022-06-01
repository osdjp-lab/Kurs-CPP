#include <iostream>

#ifndef ZAD_PAR_H
#define ZAD_PAR_H

class ZadParzysta {
    private:
        bool bit_parity_check(int a);
        bool modulo_parity_check(int a);
        bool conditional_parity_check(int a);
        void print_parity(bool p);
    public:
        void info();
        void print();
};

#endif
