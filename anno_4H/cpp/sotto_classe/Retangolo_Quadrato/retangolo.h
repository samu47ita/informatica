#include <iostream>
using namespace std;

class retangolo
{
    private:
        int base;
        int altezza;
    public:
        retangolo(int base, int altezza);
        void setBase(int base);
        void setAltezza(int altezza);
        int getBase(); 
        int getAltezza();
        void calcolaArea();
        void calcolaPerimetro();
};
