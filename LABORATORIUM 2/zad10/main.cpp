#include <iostream>
#include "lista.h"
#include "element.h"
using namespace std;

int main()
{
    int rozmiar;
    int elem;
    int szukana;
    
    Lista *lista = new Lista;  //tworze liste
    
    cin>>rozmiar; 
    
    for(int i=0; i<rozmiar; i++)
    {
       cin>>elem;
       lista->dodaj(elem);
    }
   
    lista->wyswietl();
    lista->sortuj();
    cout<<endl;
    lista->wyswietl();
    
    delete lista;
    
    return 0;
}