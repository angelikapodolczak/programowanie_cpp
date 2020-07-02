#ifndef LISTA_H
#define LISTA_H

#include "element.h"
using namespace std;

class Lista
{
    
private:
    Element *pierwszy; //wskaznik na poczatek - pierwszy element listy
    
    
public:
    Lista();  //konstruktor
    ~Lista(); //destruktor                                                                                                                                                                 
    
    virtual void dodaj(int wartosc);   //przyjmuje jako argument liczbe całkowitą; dodaje na koniec listy
    virtual void wyswietl();  //wyswietla liste od pierwszego elementu do ostatniego
    virtual void sortuj();  //sortowanie listy rosnąco
    
};

#endif