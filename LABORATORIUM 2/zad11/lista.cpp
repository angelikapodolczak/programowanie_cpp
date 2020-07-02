#include <iostream>
#include "lista.h"

using namespace std;

Lista::Lista()
{
    pierwszy = nullptr;
}

void Lista :: dodaj(int wartosc) 
{
    Element *nowy = new Element;  //tworzy nowy element listy
    nowy->wartosc = wartosc;  //wypełnienie naszą wartością
    nowy->nastepny = nullptr; //nowy nie wskazuje na nastepny, bo go nie ma
    
    Element *koniec = pierwszy;
    if(pierwszy)    //czy mamy pierwszy element
    {
        while (koniec->nastepny)  //znajdujemy wskaźnik na ostatni element listy
        {
            koniec = koniec->nastepny;
        }
         
        koniec->nastepny = nowy;  //ostatni element wskazuje na nasz nowy
        nowy->poprzedni = koniec; //nowy wskazuje na poprzedni - ustalony koniec listy przed dodaniem
        
    }        
    else //nie mamy pierwszego elementu
    {
        pierwszy=nowy; //nowy jest pierwszym
        nowy->poprzedni = nullptr; //nie wskazuje na zadnego poprzednika
    }
    
}

void Lista :: wyswietl()
{
    for(Element *i=pierwszy; i; i = i->nastepny)
        cout<<i->wartosc<<" ";
}

Lista :: ~Lista()
{

}