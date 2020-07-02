#include<iostream>
#include"test.h"
using namespace std;

int main()
{
    int dzien, miesiac, rok;
    cin>>dzien;
    cin>>miesiac;
    cin>>rok;
    
    Data liczbowo(dzien,miesiac,rok);
    
    liczbowo.dzien_tygodnia();
    cout<<" ";
    liczbowo.wyswietl_date();
    
    cout<<endl;
    
    
    int dzien1, rok1;
    string miesiac1;
    cin>>dzien1;
    cin>>miesiac1;
    cin>>rok1;
    
    Data slownie(dzien1,miesiac1,rok1);
    
    slownie.dzien_tygodnia();
    cout<<" ";
    slownie.wyswietl_date();
    
    return 0;
}