#ifndef ITERATOR_H
#define ITERATOR_H

#include "lista.h"
using namespace std;

class Iterator
{
private:
    Element *aktualny;
    Element *wskaznik;

public:
    Iterator(Lista &wskaznik);
    virtual void przesun(int oile);
    virtual void zwroc_aktualny();
};

#endif