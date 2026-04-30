#include <iostream>
using namespace std;

class retangolo
{
    private:
        int base;
        int altezza;
    public:
        retangolo(int base = 1, int altezza = 1);
        void setBase(int base);
        void setAltezza(int altezza);
        int getBase(); 
        int getAltezza();
        void calcolaArea();
        void calcolaPerimetro();
};
