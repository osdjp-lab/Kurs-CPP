#include "include/ZadKcpp.h"
using namespace std;

/*
 * Zadanie 6.1
 * --------------------------------------
 * - Zaprojektuj klasę/klasy i umieść funkcje z 5 wybranych zadań z zakresu 1.1-5.6
 *   jako metody danej klasy/klas
 * - Deklaracja metod w ciele klasy, a definicja poza,
 * - Definicje metod w osobnym pliku nagłówkowym
 * - nazwij klasę nadrzędną: ZadKcpp (plik: ZadKcpp.cc)
 * - używaj dyrektywy preprocesora #define w plikach nagłówkowych
 * - wszystko w osobnym katalogu: ZadClassKcpp
 *   - main.cc w ZadClassKcpp,
 *   - pliki nagłówkowe w katalogu: ZadClassKcpp/include,
 *   - pliki źródłowe w katalogu: ZadClassKcpp/src
 * - Program powinien zawierać interaktywne menu z możliwościa wyboru zadania do wywołania 
 *   - menu:
 *    - sekcja
 *    - numer zadania w sekcji i opis w kilku słowach co dana funkcja (zadanie) zawiera
 */

int main() {
    ZadKcpp zad;
    zad.menu();
    return 0;
}