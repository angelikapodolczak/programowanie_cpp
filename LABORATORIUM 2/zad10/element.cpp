#include <iostream>
#include "lista.h"
#include "element.h"
using namespace std;

Element :: Element ()
{
    nastepny = nullptr;
    poprzedni = nullptr;
}

int Element :: podaj_wartosc() const
{
    return wartosc;
}

Element :: ~Element()
{

}