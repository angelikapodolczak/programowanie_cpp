#include <iostream>
#include "drzewo.h"
#include "element.h"
using namespace std;

int main()
{
    int rozmiar; //liczba elementow
    int elem;
    int szukana;
    
    Drzewo *drzewo = new Drzewo;
    
    cin>>rozmiar; 
    
    for(int i=0; i<rozmiar; i++)
    {
       cin>>elem;
       drzewo->dodaj(elem);
    }
   
    cin>>szukana;
    
    if(drzewo->szukaj(szukana)!=-1) cout<<"znaleziono na poziomie "<<drzewo->szukaj(szukana)<<endl;
    else cout<<"nie znaleziono"<<endl;
    
    delete drzewo;
    
    return 0;
}