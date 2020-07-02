#include<iostream>
#include "kwadrat.h"
using namespace std;

Kwadrat::Kwadrat (double x)
{
    bok=x;
    cout<<"Utworzono Kwadrat"<<endl;
}

Kwadrat::~Kwadrat()
{
    cout<<"Usunieto Kwadrat"<<endl;
}

double Kwadrat::pole()
{
    return bok*bok;
}