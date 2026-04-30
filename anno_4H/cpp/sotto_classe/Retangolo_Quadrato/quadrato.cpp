#include<iostream>
#include"quadrato.h"
using namespace std;
quadrato::quadrato(int lato):retangolo(lato, lato)
{
    this->lato = lato;
}
void quadrato::setLato(int lato)
{
    this->lato = lato;
}
int quadrato::getLato()
{
    return lato; 
}
void quadrato::stampaQuadrato()
{
    for (int i = 0; i < lato; i++)
    {
        for (int j = 0; j < lato; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void quadrato::calcolaArea()
{
    int area = lato * lato;
    cout << "L'area del quadrato è: " << area << endl;
}
void quadrato::calcolaPerimetro()
{
    int perimetro = 4 * lato;
    cout << "Il perimetro del quadrato è: " << perimetro << endl;
} 
