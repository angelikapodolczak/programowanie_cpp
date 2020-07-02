#include<iostream>
using namespace std;

class Kontener
{
private:
    int *tab;
    int start;
    int koniec;

public:
    Kontener(int st, int ko);
    int zwroc_start();
    int zwroc_koniec();
    ~Kontener();
    int & operator [] (int indeks);
};