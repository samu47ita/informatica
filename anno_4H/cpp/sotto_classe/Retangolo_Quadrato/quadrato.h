#include<iostream>
#include"retangolo.h"
using namespace std;
class quadrato : public retangolo
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

