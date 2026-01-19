#include <iostream>

using namespace std;

class retangolo 
{
    private:
    double base;
    double altezza;
    public:
    retangolo(int base =5.0,int altezza= 10.0)
    {
        this -> base = base;
        this -> altezza = altezza;
    }
    double calcolaArea()
    {
        return base *altezza;
    }
    double calcolaperimetro()
    {
        return (base + altezza) * 2;
    }

};
int main ()
{
    double base, altezza;
    cout << "inserisci un numero per avalorare la base: \n";
    cin >> base;
     cout << "inserisci un numero per avalorare la altezza: \n";
    cin >> altezza;
    retangolo r1 (base,altezza);
    retangolo r2(8);
    retangolo r3;
    cout << "l'area del retangolo: " << r1.calcolaArea() << endl;
    cout << "il perimetro del retangolo: " << r1.calcolaperimetro() << endl; 
    cout << "l'area del retangolo: " << r2.calcolaArea() << endl;
    cout << "il perimetro del retangolo: " << r2.calcolaperimetro() << endl;
    cout << "larea del retangolo: " << r3.calcolaArea() << endl;
    cout << "il perimetro del retangolo: " << r3.calcolaperimetro() << endl;  
}