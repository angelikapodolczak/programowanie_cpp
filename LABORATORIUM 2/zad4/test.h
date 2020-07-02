#include<iostream>
using namespace std;

class Data
{
    private: 
        int dzien;
        int miesiac;
        int rok;
    public:
        Data(int dzien=0, int miesiac=0, int rok=0); //konstruktor
        ~Data();  //destruktor
        
        void wyswietl(); 
        
        Data operator+ (int n);
        Data operator+ (Data plus);

        Data operator+= (int n); // operator+= nie powinien nic zwracać(ewentualnie referencję do samego siebie). SM
        Data operator+= (Data plus);
        
        friend ostream & operator<< (ostream &wyjscie,const Data &wynik);
        
        friend Data dodaj_date(int &dzien,int &miesiac,int &rok,Data plus);
};
ostream & operator<< (ostream &wyjscie,const Data &wynik);