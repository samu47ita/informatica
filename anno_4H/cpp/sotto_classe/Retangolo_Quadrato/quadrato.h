#include<iostream>
using namespace std;
class quadrato
{
    private:
        int lato;
    public:
        quadrato(int lato );
        void setLato(int lato);
        int getLato();
        void stampaQuadrato();
        void calcolaArea();
        void calcolaPerimetro();
};

