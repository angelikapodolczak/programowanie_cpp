#ifndef ELEMENT_H
#define ELEMENT_H
#include "drzewo.h"
using namespace std;

class Element
{
    
private:
    Element *lewy;  //wskaźnik na lewy nastepnik
    Element *prawy; //wskaźnik na prawy nastepnik
    int wartosc; 
    
public:
    Element(); // konstruktor
    Element(int a); // przeładowany konstruktor z wartoscia
    ~Element(); //destruktor
    
    int podaj_wartosc();  //zwraca przechowywaną wartość
    Element *zwroc_lewy();  //funkcje zwracajace 
    Element *zwroc_prawy();
    void ustaw_lewy(Element *nowy,int a); //funkcje ustawiajace
    void ustaw_prawy(Element *nowy,int a);
    
};

#endif