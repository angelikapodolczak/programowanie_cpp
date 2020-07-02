#include <iostream>
#include "drzewo.h"
#include "element.h"
using namespace std;

Element :: Element ()
{
    lewy = nullptr;
    prawy = nullptr;
}

Element :: Element (int a)
{
    lewy = nullptr;
    prawy = nullptr;
    wartosc=a;
}

int Element :: podaj_wartosc() 
{
    return wartosc;
}

Element *Element :: zwroc_lewy()
{
    return lewy;
}

Element *Element :: zwroc_prawy()
{
    return prawy;
}

void Element :: ustaw_lewy(Element *nowy,int a)
{
    delete lewy;
    lewy=nowy;
    lewy->wartosc = a;
}

void Element :: ustaw_prawy(Element *nowy,int a)
{
    delete prawy;
    prawy=nowy;
    prawy->wartosc = a;
}

Element :: ~Element()
{
    delete lewy;
    delete prawy;
}