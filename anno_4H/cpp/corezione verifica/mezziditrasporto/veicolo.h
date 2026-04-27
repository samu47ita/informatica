#include<iostream>
#include<string>

using namespace std;

class Veicolo
{
    private:
        int idveicolo;
        string modello;
        double chilometragio;    
    public:
        Veicolo(int idveicolo=0,string modello="fiat",double chilometragio=0);
        void setidveicolo(int idveicolo);
        int getidveicolo();
        void setchilometragio(double chilometragio);
        double getchilometragio();
        void setmodello(string modello);
        string getmodello();
        void agiungiChilometri(double kmpercorsi);

};

