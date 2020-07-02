#include"test.h"
#include <cstdlib>
#include<iostream>
using namespace std;

void zeruj()    //nie spelnia warunkow
{
    cout<<"00/00/00";
    exit(0);    
}


Data::Data(int d, int m, int r) //konstruktor
{
    dzien=d;
    miesiac=m;
    rok=r;
    switch(miesiac)
    {
        case 1: //31 dni w miesiacu
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                {
                    if(dzien<1 or dzien>31) zeruj(); // konstruktor miał tylko zerować elementy, program miał działać dalej. SM
                    break;
                }
        case 4: //30 dni w miesiacu
        case 6:
        case 9:
        case 11:
                {
                    if(dzien<1 or dzien>30) zeruj();
                    break;
                }
        case 2:     //luty-28/29
                {
                    if(((rok % 4 == 0) and (rok % 100 != 0)) or (rok % 400 == 0)) //rok przestępny
                        {if(dzien<1 or dzien>29) zeruj();}
                    else if(dzien<1 or dzien>28) zeruj();
                    break;
                }
        default:
                {
                    zeruj();
                    break;
                }
    }
}



Data::Data(int d, string m, int r)
{
    int x=0;
    string m1[]={"styczen","luty","marzec","kwiecien","maj","czerwiec","lipiec","sierpien","wrzesien","pazdziernik","listopad","grudzien"};
    for(int i=0; i<12; i++)
    {
        if(m1[i]==m) //zamiana słowa na cyfre
        {x=i+1; break;}
    }
    dzien=d;
    miesiac=x;
    rok=r;
    
    switch(miesiac) //sprawdzenie warunków
    {
        case 1: //31 dni w miesiacu
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
                {
                    if(dzien<1 or dzien>31) zeruj();
                    break;
                }
        case 4: //30 dni w miesiacu
        case 6:
        case 9:
        case 11:
                {
                    if(dzien<1 or dzien>30) zeruj();
                    break;
                }
        case 2:     //luty-28/29
                {
                    if(((rok % 4 == 0) and (rok % 100 != 0)) or (rok % 400 == 0)) //rok przestępny
                        {if(dzien<1 or dzien>29) zeruj();}
                    else if(dzien<1 or dzien>28) zeruj();
                    break;
                }
        default:
                {
                    zeruj();
                    break;
                }
    }
    
}



Data::~Data()
{
    cout<<endl<<"Usunieto";
}



void Data::dzien_tygodnia() 
{
    int t[]={0,31,59,90,120,151,181,212,243,273,304,334};
    string t1[]={"poniedzialek", "wtorek", "sroda", "czwartek", "piatek", "sobota", "niedziela"};
    int yy, c, g, pierwszy_dzien_roku, dzien_roku, dzien_tygodnia;
    
    yy = (rok-1) % 100;
    c = (rok-1) - yy;
    g = yy + (yy/4);
    pierwszy_dzien_roku = ((( (c/100) % 4) * 5) + g) % 7;
    dzien_roku = t[miesiac-1] + dzien; // wyjście poza zakres jeśli miesiac=0. SM
    if(( (rok % 4 == 0) and (rok % 100 != 0)) or (rok % 400 == 0))//rok przestepny
        if(miesiac > 2)
            dzien_roku++;
    dzien_tygodnia = (pierwszy_dzien_roku + dzien_roku - 1) % 7;
    cout << t1[dzien_tygodnia];
}


void Data::wyswietl_date()
{
    cout << dzien << "/"; // brak wyświetlania dnia tygodnia. SM
    if(miesiac<10) cout << "0"; //format dd/mm/rr
    cout << miesiac << "/";
    cout << rok % 100;
}


