#ifndef DRZEWO_H
#define DRZEWO_H
#include "element.h"
using namespace std;

class Drzewo
{
    
private:
    Element *korzen; //wskaznik na poczatek - korzen drzewa
    int poziom=0; //poziom wezla - dla korzenia =0
    
public:
    Drzewo();  //konstruktor
    ~Drzewo(); //destruktor                                                                                                                                                                 
    
    void dodaj(int wartosc);   //przyjmuje jako argument liczbe całkowitą; dodaje do drzewa na koniec
    int szukaj(int szukana);  //test przynależności
    
};

#endif