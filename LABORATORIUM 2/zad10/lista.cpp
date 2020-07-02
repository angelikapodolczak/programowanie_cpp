#include <iostream>
#include "lista.h"
#include "element.h"
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
    
    for(Element *p=pierwszy; p!=nullptr ; p = p->nastepny)
    {
        cout<<p->wartosc<<" ";
    }
}


void Lista :: sortuj()
{
    Element *koniec = pierwszy;
    while (koniec->nastepny)  //znajdujemy wskaźnik na ostatni element listy
    {
        koniec = koniec->nastepny;
    }
    
    for(Element *i=pierwszy; i->nastepny!=nullptr; i = i->nastepny)
    {
        for(Element *j=pierwszy; j->nastepny!=nullptr; j = j->nastepny)
        {
            if(j->podaj_wartosc() > j->nastepny->podaj_wartosc())
            {
                j->nastepny=j->nastepny->nastepny; // błędne ustawianie wskaźników. SM
                j->nastepny->nastepny=j->poprzedni->nastepny;
                j->nastepny->poprzedni=j->nastepny->nastepny->poprzedni;
                j->nastepny->nastepny->poprzedni=j->poprzedni;
                
                
                if(j==pierwszy)
                {
                    j->nastepny=nullptr;
                }
                else if (j==koniec)
                {
                    j->nastepny->poprzedni=nullptr;
                }
            }
        }
    }
}

Lista :: ~Lista()
{
    // brak usuwania elementów. SM
}