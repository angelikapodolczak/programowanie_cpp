#include<iostream>
#include"test.h"
using namespace std;

int main()
{
    int dzien, miesiac, rok, dzien1, miesiac1, rok1, dzien2, miesiac2, rok2;
    int n, l;
    
//  PODAJ DATE
    cin>>dzien>>miesiac>>rok;
    Data d1(dzien,miesiac,rok);
    
//  TWOJA DATA
    cout<<d1;

//  PODAJ LICZBE
    cout<<endl;
    cin>>n;
    
//  PO DODANIU LICZBY +
    Data d2(dzien,miesiac,rok);
    d2+n;
    cout<<endl;
    cout<<d2;
    
//  DRUGA DATA
    cout<<endl;
    cin>>dzien1>>miesiac1>>rok1;
    Data plus(dzien1,miesiac1,rok1);

//  PO DODANIU DATY +
    d2+plus;
    cout<<endl;
    cout<<d2;

//  PODAJ LICZBE
    cout<<endl;
    cin>>l;
    
//  PO DODANIU LICZBY +=
    d2+=l;
    cout<<endl;
    cout<<d2;
    
//  PODAJ DATE
    cout<<endl;
    cin>>dzien2>>miesiac2>>rok2;
    Data plus1(dzien2,miesiac2,rok2);
    
//  PO DODANIU DATY +=
    d2+=plus1;
    cout<<endl;
    cout<<d2;
    
    return 0;
}