#include<iostream>
#include "klasa.h"
using namespace std;

int main()
{
    int a, b, n;
    
    cin>>a;
    cin>>b;
    
    Kontener obiekt(a,b);
    
    for(int i=obiekt.zwroc_start(); i<obiekt.zwroc_koniec(); i++)
    {
        cin>>n;
        obiekt[i]=n;
    }
    
    for(int i=obiekt.zwroc_start(); i<obiekt.zwroc_koniec(); i++)
    {
        cout<<i<<" : "<<obiekt[i]<<endl;
    }
    
    return 0;
}