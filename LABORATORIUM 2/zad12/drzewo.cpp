#include <iostream>
#include "drzewo.h"
#include "element.h"
using namespace std;


Drzewo :: Drzewo()
{
    korzen = NULL;
}

void Drzewo :: dodaj(int wartosc)
{
    Element *nowy = new Element;  //tworzy nowy element drzewa

    if(korzen)    //czy drzewo nie jest puste
    {
        Element *wezel=korzen;
        while(wezel)
        {
            if(wezel->podaj_wartosc() > wartosc)  //sprawdza wartosc - przejscie po drzewie
            {
                if(wezel->zwroc_prawy())
                wezel = wezel->zwroc_prawy();  //nastepny jest prawy - przejscie
                else
                {
                    wezel->ustaw_prawy(nowy,wartosc);  //wypełnienie naszą wartością
                    return;
                }
            }
            else if(wezel->podaj_wartosc() < wartosc)
            {
                if(wezel->zwroc_lewy())
                wezel = wezel->zwroc_lewy(); //nastepny jest lewy - przejscie
                else
                {
                    wezel->ustaw_lewy(nowy,wartosc); //-dodanie
                    return;
                }
            }
        }
    }
    else //gdy nie mamy korzenia
    {
        Element *nowyKorzen = new Element(wartosc);
        korzen = nowyKorzen;
    }
}


int Drzewo :: szukaj(int szukana)
{
    if(korzen)  //jezeli mamy wezel i drzewo istnieje
    {
        while(korzen)   //dopoki wezel istnieje
        {
            if(korzen->podaj_wartosc() == szukana) return poziom;   //gdy mamy szukana wartosc zwraca poziom
            else    //gdy szukana nie odpowiada danemu wezlowi
            {
                if(korzen->podaj_wartosc() < szukana)   //przejscie do kolejnego wezla
                    korzen = korzen->zwroc_lewy(); //do lewego
                else
                    korzen = korzen->zwroc_prawy(); //do prawego
                poziom++;   //wezel jest na kolejnym poziomie
                szukaj(szukana);    //rekurencja - sprawdzanie kolejnych wezlow
            }
        }
    }
    return -1;  //szukana wartosc nie wystepuje w drzewie
}

Drzewo :: ~Drzewo()
{
    delete korzen;
}
