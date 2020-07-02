#include<iostream>
#include<cmath>
using namespace std;

double newton(double xa, double x, double delta)
{
    double funkcja_a, pochodna_a, funkcja_x0, x0;
    const double ACCURACY=1.0E-6;
    const int MAX=100;
    int zlicz=0;
    
    funkcja_a=sqrt(xa); // nie ta funkcja. SM
    
    for(int i=1; i<=MAX; i++)
    {
        pochodna_a=1/(2*sqrt(xa)); // zła pochodna. SM
        x0=xa-(funkcja_a/pochodna_a);   //punkt przecięcia sie stycznej do wykresu w punkcie xa z osia x
        funkcja_x0=sqrt(x0);      //wartość funkcji dla wyliczonego punktu x0
        if(fabs(funkcja_x0)<ACCURACY) // nie ten warunek. SM
        {
            cout<<"Pierwiastek wynosi: "<<x0<<endl;
            cout<<"Liczba iteracji: "<<zlicz<<endl;
        }
        else 
        {
            xa=x0;
            funkcja_a=funkcja_x0;
            zlicz++;
        }
        //if(zlicz==MAX) {cout<<"blad";break;}
    }
}

int main()
{
    double x, delta;
    cout<<"Podaj x:";
    cin>>x;
    cout<<"Podaj dokladnosc:";
    cin>>delta;
    cout<<endl;
    double xa=x/2;   //punkt startowy
    // brak sprawdzenia x > 0. SM
    cout<<newton(xa,x,delta);
    
    return 0;
}