#include <iostream>
using namespace std;

int main()
{
    int ilosc_wierszy;
    int rozmiar_wiersza=0;

    int *t;     //przechowanie długości wiersza
    int **w_tab;
    cin>>ilosc_wierszy;
    
    t = new int [rozmiar_wiersza]; // tablica niepotrzebna. SM
    w_tab = new int *[ilosc_wierszy];   //przydzielenie pamieci na ilosc_wierszy
    

    for(int i=0; i<ilosc_wierszy; i++)
    {
        cin>>rozmiar_wiersza;
        t[i] = rozmiar_wiersza;
        w_tab[i] = new int[rozmiar_wiersza];  //przydzielenie dla kazdego wiersza po rozmiar_wiersza komorek

        for(int j=0; j<t[i]; j++)
        {
            w_tab[i][j]=rozmiar_wiersza;
        }
    }

    cout<<endl;
    
    for(int i=0; i<ilosc_wierszy; i++)
    {
        for(int j=0; j<t[i]; j++)   //t[i] - każdy wiersz innej długości
        {
            cout<<w_tab[i][j]; 
        }
        cout<<endl;
    }

    for(int i=0; i<ilosc_wierszy; i++)    //zwolnienie pamieci kazdej komorki
        delete [] w_tab[i];
    delete [] w_tab;

    delete [] t;        //zwolnienie pamieci tablicy jednowymiarowej
    return 0;
}