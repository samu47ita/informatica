#include<iostream>
#include<string>
#include"veicolo.h"
#include"veicolo.cpp"
using namespace std;

int main()
{
    Veicolo v1(1,"fiat",1000);
    cout<<"id veicolo: "<<v1.getidveicolo()<<endl;
    cout<<"modello: "<<v1.getmodello()<<endl;
    cout<<"chilometraggio: "<<v1.getchilometragio()<<endl;
    v1.agiungiChilometri(500);
    cout<<"chilometraggio dopo aggiunto 500 km: "<<v1.getchilometragio()<<endl; 

    return 0;
}