#ifndef KWADRAT_H
#define KWADRAT_H
using namespace std;
#include "figura.h"

class Kwadrat :public Figura
{       
        double bok;
    public:
        Kwadrat(double x);
        ~Kwadrat();
        double pole();
};


#endif