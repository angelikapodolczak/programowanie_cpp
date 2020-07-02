#include<iostream>
#include "klasa.h"
using namespace std;

Kontener::Kontener(int st, int ko)
{
    if(start>koniec)
    swap(start,koniec);
   
    start=st;
    koniec=ko;
    
    tab = new int[koniec-start];
    
    for(int i=0; i<koniec; i++)
    {
        tab[i]=0;
    }
}

int Kontener::zwroc_start()
{
    return start;
}

int Kontener::zwroc_koniec()
{
    return koniec;
}

int & Kontener:: operator[] (int indeks)
{
    return tab[indeks-start];
}

Kontener::~Kontener()
{
    delete [] tab;
    cout<<"destruktor"<<endl;
}