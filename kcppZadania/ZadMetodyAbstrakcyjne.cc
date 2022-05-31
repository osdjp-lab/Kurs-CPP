#include <iostream>
#include <math.h>
using namespace std;

/**
 * Zadanie 5.6
 * --------------------------------------
 * Bazując na pliku LClassMetodyAbstrakcyjne.cc stwórz program który oblicza:
 * - obwód, pole powierzchni
 * dla:
 * - kwadrat, trójkąt, prostokąt, koło
 * (jako klasy dziedziczące po klasie abstrakcyjnej Figura),
 * oraz funkcja Dystans (dodatkowo w klasie Koło):
 *  Jeśli rząd podaje, że na każdego obywatela w sklepie (kościele etc)
 *  przypada X metrów kwadratowych (argument przekazywany do funkcji)
 *  to w jakiej odległości (promieniu - to ma funkcja Dystans zwracać)
 *  może znaleźć się następna osoba.
 * Nazwać program: ZadMetodyAbstrakcyjne.cc 
 */

class Figura {
    public:
        virtual double obwod() = 0;
        virtual double pole() = 0;
};

class Kwadrat : public Figura {
    private:
        double a;
    public:
        Kwadrat(double a) {
            this->a = a;
        }
        double obwod() {
            return 4 * a;
        }
        double pole() {
            return a * a;
        }
};

class Trojkat : public Figura {
    private:
        double a, b, c;
    public:
        Trojkat(double a, double b, double c) {
            this->a = a;
            this->b = b;
            this->c = c;
        }
        double obwod() {
            return a + b + c;
        }
        double pole() {
            double p = (a + b + c) / 2;
            return sqrt(p * (p - a) * (p - b) * (p - c));
        }
};

class Prostokat : public Figura {
    private:
        double a, b;
    public:
        Prostokat(double a, double b) {
            this->a = a;
            this->b = b;
        }
        double obwod() {
            return 2 * (a + b);
        }
        double pole() {
            return a * b;
        }
};

class Kolo : public Figura {
    private:
        double r;
    public:
        Kolo(double r) {
            this->r = r;
        }
        double obwod() {
            return 2 * M_PI * r;
        }
        double pole() {
            return M_PI * r * r;
        }
        double Dystans(double x) {
            return sqrt(x / M_PI);
        }
};

int main() {
    // Test klasy Kwadrat
    Kwadrat kwadrat(2);
    cout << "Obwód kwadratu: " << kwadrat.obwod() << endl;
    cout << "Pole kwadratu: " << kwadrat.pole() << endl;
    cout << endl;
    // Test klasy Trojkat
    Trojkat trojkat(3, 4, 5);
    cout << "Obwód trojkata: " << trojkat.obwod() << endl;
    cout << "Pole trojkata: " << trojkat.pole() << endl;
    cout << endl;
    // Test klasy Prostokat
    Prostokat prostokat(3, 4);
    cout << "Obwód prostokata: " << prostokat.obwod() << endl;
    cout << "Pole prostokata: " << prostokat.pole() << endl;
    cout << endl;
    // Test klasy Kolo
    Kolo kolo(2);
    cout << "Obwód kola: " << kolo.obwod() << endl;
    cout << "Pole kola: " << kolo.pole() << endl;
    cout << endl;
    // Test dystansu
    cout << "Dystans: " << kolo.Dystans(4) << endl;
    return 0;
}
