#include <iostream>
#include "lista.h"
#include "iterator.h"
using namespace std;

int main()
{
    int rozmiar;
    int elem;
    int oile;
    int przesuniecia;
    
    Lista *lista = new Lista;  //tworze liste
    
    cin>>rozmiar;  //wczytuje rozmiar
    for(int i=0; i<rozmiar; i++)    //wczytuje elementy
    {
       cin>>elem;
       lista->dodaj(elem);
    }
   
    lista->wyswietl();  //wyswietla liste
    
    Iterator *iterator = new Iterator(&lista);
    iterator->zwroc_aktualny(); //aktualny element iteratora
    
    cin>>przesuniecia; //liczba przesuniec
    for(int i=0; i<przesuniecia; i++)
    {
        cin>>oile;
        iterator->przesun(oile);
        iterator->zwroc_aktualny();
    }
    
    lista->wyswietl();
    
    delete iterator;
    delete lista;
    
    return 0;
}