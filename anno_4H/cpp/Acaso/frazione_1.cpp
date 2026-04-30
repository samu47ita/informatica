#include <iostream>


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
        std::cout << numeratore << "/" << denominatore;
    }
};
int main()
{
    frazione f1,f2;
    f1.setnumeratore(16);
    f1.setdenominatore(2);
    int  n1= f1.getnumeratore();
    f1.stampa();
   std:: cout << std :: endl; 
    return 0;
}
