#include<iostream>
using namespace std;

class Data
{
    private: 
        int dzien;
        int miesiac;
        int rok;
    public:
        Data(int dzien=0, int miesiac=0, int rok=0);
        Data(int dzien, string miesiac, int rok);
        ~Data();
        void dzien_tygodnia(); // funkcja miała zwracać string. SM
        void wyswietl_date(); 
};