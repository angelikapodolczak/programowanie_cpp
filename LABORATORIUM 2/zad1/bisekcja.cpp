#include<iostream>
#include<cmath>
using namespace std;

double funkcja (double x, double a, double b, double c, double d)
{
    return (a*x*x*x)+(b*x*x)+(c*x)+d;
}

double bisekcja(double min, double max, double delta, double a, double b, double c, double d)
{
    const double przy_zero=1.0E-9;
    double ymin=funkcja(min,a,b,c,d);
    double ymax=funkcja(max,a,b,c,d);
    int zlicz=0;
    while(fabs(max-min)>delta)
    {
        zlicz++;
        double podzial=(min+max)/2.0;    //podzial - nowe krance przedialu
        double y=funkcja(podzial,a,b,c,d);
        // w zadaniu nie ma nic o takim warunku. SM
        if(fabs(y)<przy_zero) 
            return podzial;
        if(ymin*y>0) 
        {
            min=podzial;
            ymin=y;
        }
        else
        {
            max=podzial;
            ymax=y;
        }
        if(zlicz==1000) cout<<"nie znaleziono";
    }
    if(zlicz<1000) return min;
}

int main()
{
    double a, b, c, d, min, max;
    double delta;
    cout<<"Podaj wspolczynniki wielomianu: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cout<<"Podaj przedzial przeszukiwania: "<<endl;
    cin>>min;
    cin>>max;
    cout<<"Podaj dokladnosc: "<<endl;
    cin>>delta;
    cout<<"Wynik:"<<endl;
    if((funkcja(min,a,b,c,d)<0 and 0<funkcja(max,a,b,c,d)) or (funkcja(min,a,b,c,d)>0 and 0>funkcja(max,a,b,c,d)))
    cout<<bisekcja(min,max,delta,a,b,c,d);
    else cout<<"brak miejsc zerowych";
    
    return 0;
}