#include <iostream>

#include "iterator.h"
using namespace std;

Iterator :: Iterator (Lista &wskaznik)
{
    wskaznik=pierwszy;
}

void :: Iterator przesun (int oile)
{
    if(oile>0)
    for(int i=0; i<oile; i++)
    {
        if(wskaznik->nastepny)
        wskaznik=wskaznik->nastepny;
    }
    
    else if(oile<0)
    for(int i=oile; i!=0, i++)
    {
        if(wskaznik->poprzedni)
        wskaznik=wskaznik->poprzedni;
    }
}

void :: Iterator zwroc_aktualny()
{
    return aktualny;
}