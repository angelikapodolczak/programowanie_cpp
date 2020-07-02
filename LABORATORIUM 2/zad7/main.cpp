#include <iostream>
#include "figura.h"
#include "kwadrat.h"
#include "trojkat.h"
using namespace std;

int main()
{
    double a;
    cin>>a;
    
    Figura *kw;
    kw = new Kwadrat(a);
    cout<<"Pole wynosi: ";
    cout<< kw -> pole() <<endl;

    double b,h;
    cin>>b;
    cin>>h;
    
    Figura *tr;
    tr = new Trojkat(b,h);
    cout<<"Pole wynosi: ";
    cout<< tr -> pole() <<endl;
    
    delete kw;
    delete tr;
    
    return 0;
}