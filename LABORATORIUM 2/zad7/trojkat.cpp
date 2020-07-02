#include<iostream>
#include "trojkat.h"
using namespace std;

Trojkat::Trojkat(double x, double h) 
{
    bok=x;
    wysokosc=h;
    cout<<"Utworzono Trojkat"<<endl;
}

Trojkat::~Trojkat()
{
    cout<<"Usunieto Trojkat"<<endl;
}

double Trojkat::pole()
{
    return bok*wysokosc/2;
}