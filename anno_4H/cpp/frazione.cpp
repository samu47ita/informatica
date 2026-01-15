#include <iostream>
using namespace std;

class frazione
{
private:

    int numeratore;
    int denominatore;

public:
    frazione(){}
    frazione(int d)
    {
        denominatore = d;
    }

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
   
    int MCD  (int x, int y)
    {
        while (x != y)
        {
         if (x>y)
         {
            x= x - y;
         }
         else
         {
            y= y-x;
         }
        
        }
        return x;
    }
    void semplifica()
    {
        int r = MCD(numeratore, denominatore);
        numeratore /= r;
        denominatore /= r;
    }
     void stampa()
    {
        cout << numeratore << "/" << denominatore;
    }
};
int main()
{
    int num1,num2;
    cout << "inserisci un numero: \n";
    cin >> num1;
    cout << "inserisci un numero: \n";
    cin >> num2;
    frazione f1,f2;
    f1.setnumeratore(num1);
    f1.setdenominatore(num2);
    f1.semplifica();
    // int  n1= f1.getnumeratore();
    f1.stampa();
    cout << endl; 
    return 0;
}






