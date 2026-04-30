#include "retangolo.h"
#include <iostream>
using namespace std;
retangolo::retangolo(int base, int altezza)
{
    this->base = base;
    this->altezza = altezza;
}
void retangolo::setBase(int base)
{
    this->base = base;
}
void retangolo::setAltezza(int altezza)
{
    this->altezza = altezza;
}
int retangolo::getBase()
{
    return base;
}
int retangolo::getAltezza()
{
    return altezza;
}

void retangolo::calcolaArea()
{
    int area = base * altezza;
    cout << "L'area del rettangolo è: " << area << endl;
}
void retangolo::calcolaPerimetro()
{
    int perimetro = 2 * (base + altezza);
    cout << "Il perimetro del rettangolo è: " << perimetro << endl;
}