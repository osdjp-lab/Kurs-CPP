#include <iostream>
#include <map>
#include "ZadZwracanie.h"
#include "ZadArytmetykaWskaznikow.h"
#include "LManipulacjaStrumieniemCout.h"
#include "ZadParzysta.h"
#include "ZadPreprocesor.h"

#ifndef ZAD_KCPP_H
#define ZAD_KCPP_H

typedef void (*voidFunc)();

class ZadKcpp {
    private:
        ZadZwracanie zadZwracanie;
        ZadArytmetykaWskaznikow zadArytmetykaWskaznikow;
        LManipulacjaStrumieniemCout lManipulacjaStrumieniemCout;
        ZadParzysta zadParzysta;
        ZadPreprocesor zadPreprocesor;
        int sekcja();
        int zadanie();
    public:
        void menu();
};

#endif
