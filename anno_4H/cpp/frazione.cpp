#include <iostream>
using namespace std;

class frazione
{
private:

    int numeratore;
    int denominatore;

public:

    void setnumeratore(int n) 
    {
        numeratore = n ;    
    }
    void setdenominatore(int n)
    {
        denominatore  = n;
    }
    int getnumeratore() 
    { 
        return numeratore;
    }
    int getdenominatore()
    {
        return denominatore;
    }
    void stampa()
    {
        cout << numeratore << "/" << denominatore;
    }
};
int main()
{
    frazione f1,f2;
    f1.setnumeratore(16);
    f1.setdenominatore(2);
    int  n1= f1.getnumeratore();
    f1.stampa();
    cout << endl; 
    return 0;
}






