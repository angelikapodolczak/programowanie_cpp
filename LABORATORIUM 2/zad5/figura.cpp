#include<iostream>
#include "figura.h"
using namespace std;

Figura::Figura(double p)
    {
        cout<<"Utworzono Figure"<<endl;
        pole=p;
    }
    
double Figura::zwroc()
    {
        cout<<"Pole wynosi: "; // niepotrzebne wyświtlanie. SM
        return pole;
    }