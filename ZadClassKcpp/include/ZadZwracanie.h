#include <iostream>

#ifndef ZADZWRACANIE_H
#define ZADZWRACANIE_H

class ZadZwracanie {
    private:
        int x;
        int fval(int a, int b);
        int& fref(int a, int b);
        int* fptr(int a, int b, int* p);
        void ftab(int a, int b, int tab[]);
    public:
        void info();
        void print();
};

#endif
