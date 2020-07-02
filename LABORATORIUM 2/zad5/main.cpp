#include <iostream>
#include "figura.h"
#include "kwadrat.h"
#include "trojkat.h"
using namespace std;

int main()
{
    double a;
    cin>>a;
    Kwadrat K1(a);
    cout<<K1.zwroc()<<endl;

    double b,h;
    cin>>b;
    cin>>h;
    Trojkat T1(b,h);
    cout<<T1.zwroc()<<endl;
    
    return 0;
}