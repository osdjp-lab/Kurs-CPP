#include <iostream>

#ifndef ZAD_PREPROC_H
#define ZAD_PREPROC_H

#define DEBUG 1

#define PRINT_NAME(function_name) cout << #function_name;
#define CALL_FUNCTION(func, type) func##type();

#define BEGIN 0
#define END 10

#ifdef DEBUG
#define PRINT_VALUE(i, n) cout << "fib[" << i << "] = " << n << endl;
#else
#define PRINT_VALUE(i, n) cout << n << " " << endl;
#endif

class ZadPreprocesor {
    private:
        void fibWithMacro();
        void fibWithoutMacro();
    public:
        void info();
        void print();
};

#endif
