#ifndef ELEMENT_H
#define ELEMENT_H
#include "lista.h"

using namespace std;

class Element
{
    
private:
    Element *poprzedni;  //wskaźniik na poprzedni element
    Element *nastepny;  //wskaźnik na następny element
    int wartosc; 
    
    
public:
    Element(); // konstruktor
    ~Element(); //destruktor
    
    int podaj_wartosc() const;  //zwraca przechowywaną wartość
    
friend class Lista;  //zaprzyjaźnienie
};

#endif