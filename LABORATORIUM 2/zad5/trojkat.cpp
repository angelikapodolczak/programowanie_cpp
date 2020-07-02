#include<iostream>
#include "trojkat.h"
using namespace std;

Trojkat::Trojkat(double x, double h) :Figura(pole)
{
    cout<<"Utworzono Trojkat"<<endl;
    pole=x*h/2;
}

Trojkat::~Trojkat()
{
    cout<<"Usunieto Trojkat"<<endl;
}