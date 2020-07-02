#ifndef TROJKAT_H
#define TROJKAT_H
using namespace std;
#include "figura.h"

class Trojkat :public Figura
{
        double bok;
        double wysokosc;
    public:
        Trojkat(double x, double h);
        ~Trojkat();
        double pole();
};

#endif