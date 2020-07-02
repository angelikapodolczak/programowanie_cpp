#ifndef FIGURA_H
#define FIGURA_H
using namespace std;

class Figura
{
    public:
        Figura()
        {
            cout<<"Utworzono Figura"<<endl;
        }
        virtual double pole()=0;
        virtual ~Figura()
        {
            cout<<"Usunieto Figura"<<endl;
        }
};

#endif