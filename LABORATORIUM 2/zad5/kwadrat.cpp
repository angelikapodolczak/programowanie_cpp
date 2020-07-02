#include<iostream>
#include "kwadrat.h"
using namespace std;

Kwadrat::Kwadrat (double x) :Figura(pole)
{
    cout<<"Utworzono Kwadrat"<<endl;
    pole=x*x;
}

Kwadrat::~Kwadrat()
{
    cout<<"Usunieto Kwadrat"<<endl;

}