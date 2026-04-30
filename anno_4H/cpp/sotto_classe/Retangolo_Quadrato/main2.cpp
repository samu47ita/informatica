#include<iostream>
#include"retangolo.h"
#include"quadrato.h"
using namespace std;
int main()
{
    int base, altezza, lato;
    cout << "Inserisci la base del rettangolo: ";
    cin >> base;
    cout << "Inserisci l'altezza del rettangolo: ";
    cin >> altezza;
    retangolo r(base, altezza);

    r.calcolaArea();
    r.calcolaPerimetro();
    cout << "Inserisci il lato del quadrato: ";
    cin >> lato;
    quadrato q(lato);
    q.stampaQuadrato();
    q.calcolaArea();
    q.calcolaPerimetro();
    return 0;
}