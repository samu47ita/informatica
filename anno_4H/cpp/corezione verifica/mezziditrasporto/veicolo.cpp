#include<iostream>
#include<string>
#include"veicolo.h"

using namespace std;

Veicolo::Veicolo(int idveicolo,string modello,double chilometragio)
{
    this->idveicolo = idveicolo;
    this->modello = modello;
    this->chilometragio = chilometragio;
}
void Veicolo::setidveicolo(int idveicolo)
{
    this->idveicolo = idveicolo;
}
int Veicolo::getidveicolo()
{    
    return idveicolo;
}
void Veicolo::setchilometragio(double chilometragio)
{    
    this->chilometragio = chilometragio;
}   
double Veicolo::getchilometragio()
{    
    return chilometragio;
}
void Veicolo::setmodello(string modello)
{    
    this->modello = modello;
}
string Veicolo::getmodello()
{    
    return modello;
}
void Veicolo::agiungiChilometri(double kmpercorsi)
{    
    if(kmpercorsi > 0)
    {
        chilometragio += kmpercorsi;
    }    
}   