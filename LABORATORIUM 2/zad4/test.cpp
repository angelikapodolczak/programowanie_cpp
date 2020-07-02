#include"test.h"
#include <cstdlib>
#include<iostream>
using namespace std;

void zeruj(int &dzien, int &miesiac, int &rok);


///////////////////////////////////////////
// KONSTRUKTOR
// SPRAWDZANIE WARUNKÓW

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
                    if(dzien<1 or dzien>31) zeruj(dzien,miesiac,rok);
                    break;
                }
        case 4: //30 dni w miesiacu
        case 6:
        case 9:
        case 11:
                {
                    if(dzien<1 or dzien>30) zeruj(dzien,miesiac,rok);
                    break;
                }
        case 2:     //luty-28/29
                {
                    if(((rok % 4 == 0) and (rok % 100 != 0)) or (rok % 400 == 0)) //rok przestępny
                        {if(dzien<1 or dzien>29) zeruj(dzien,miesiac,rok);}
                    else if(dzien<1 or dzien>28) zeruj(dzien,miesiac,rok);
                    break;
                }
        default:
                {
                    zeruj(dzien,miesiac,rok);
                    break;
                }
    }
}


///////////////////////////////////////////////////////
// DESTRUKTOR

Data::~Data()   
{
    cout<<endl<<"Usunieto";
}


///////////////////////////////////////////////////////
// WYŚWIETLANIE DATY

void Data::wyswietl()
{
    cout << dzien << "/";
    cout << miesiac << "/";
    cout << rok << endl;
}


////////////////////////////////////////////
// ZEROWANIE DANYCH 

void zeruj(int &dzien, int &miesiac, int &rok)    //nie spelnia warunkow
{
    dzien=0;
    miesiac=0;
    rok=0;
}


//////////////////////////////////////////////////////////
// DODAWANIE z liczbą
Data dodaj_liczbe(int &dzien,int &miesiac,int &rok,int n)
{
    int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    if(((rok % 4 == 0) and (rok % 100 != 0)) or (rok % 400 == 0)) month[1]=29;
    if((dzien+n)>month[miesiac-1]) // nie zadziała jeśli n > 31/30/28/20. wyjście poza zakres jeśli miesiac==0. SM
    {
       dzien=(dzien+n)-month[miesiac-1];
       miesiac++;
       if(miesiac>12)
       {
            miesiac=miesiac-12;
            rok++;
        }
    }
    else dzien=dzien+n;
}


////////////////////////////////////////////////////////
// DODAWANIE z datą
Data dodaj_date(int &dzien,int &miesiac,int &rok,Data plus)
{
    int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    
    dzien=dzien+plus.dzien;
    miesiac=miesiac+plus.miesiac;
    rok=rok+plus.rok;
    
    while(dzien>31)
    {
        dzien=dzien-31;
        miesiac++;
    }
    
    while(miesiac>12)
    {
        miesiac=miesiac-12;
        rok++;
    }
    
    while(dzien>month[miesiac-1])
    {
        dzien=dzien-month[miesiac-1];
        miesiac++;
    }
    
    while(miesiac>12)
    {
        miesiac=miesiac-12;
        rok++;
    }
}


///////////////////////////////////////////////////////
// PRZECIĄŻENIE + z liczbą

Data Data::operator+ (int n)
{
    dodaj_liczbe(dzien,miesiac,rok,n); // operatpr+ nie powinien zmieniać zmiennych obiektu. SM
}


////////////////////////////////////////////////////////
// PRZECIĄŻENIE + z datą
Data Data::operator+ (Data plus)
{
    dodaj_date(dzien, miesiac, rok, plus);
}


/////////////////////////////////////////////////////////
// PRZECIĄŻENIE += z liczbą

Data Data::operator+= (int n)
{
    dodaj_liczbe(dzien,miesiac,rok,n);
}


/////////////////////////////////////////////////////////
// PRZECIĄŻENIE += z datą
Data Data::operator+= (Data plus)
{
    dodaj_date(dzien, miesiac, rok, plus);
}


/////////////////////////////////////////////////////////
// PRZECIĄŻENIE <<
ostream & operator<< (ostream &wyjscie,const Data &wynik)
{
    if(wynik.dzien<10) cout<<"0";
    cout<<wynik.dzien<<"/";
    if(wynik.miesiac<10) cout<<"0";
    cout<<wynik.miesiac<<"/";
    if((wynik.rok%100)<10) cout<<"0";
    cout<<wynik.rok%100;
}