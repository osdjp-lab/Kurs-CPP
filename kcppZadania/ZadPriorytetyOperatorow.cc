#include <iostream>
using namespace std;

/**
 * Zadanie 3.6
 * --------------------------------------
 * Napisać program z "Priorytety operatorów" (kcpp02::18) - na zajeciach
 * Nazwać program: ZadPriorytetyOperatorow.cc
 */

int main() {
    int x = 1, y = 2, z = 3;
    int result[] = {4, 4, 4, 4};

    result[0] *= -++x*x--+-y--%++z;
    cout << "0. " << result[0] << endl;

    result[1] *= -(++x)*(x--)+-(y--)%(++z);
    cout << "1. " << result[1] << endl;

    result[2] *= (-(++x))*(x--)+(-(y--))%(++z);
    cout << "2. " << result[2] << endl;

    result[3] *= ((-(++x))*(x--))+((-(y--))%(++z));
    cout << "3. " << result[3] << endl;
}
