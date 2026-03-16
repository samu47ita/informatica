#include <iostream>

using namespace std;

struct Nodo 
{
    int Info;
    Nodo* next;
};

typedef Nodo* PNodo;

class Coda
{
private:
    PNodo Inizio; 
    PNodo Fine;
public:
    Coda() 
    {
        Inizio = NULL; 
        Fine = NULL; 
    }

    void Inserisci(int valore) 
    {
        PNodo newNode = new Nodo; 
        newNode->Info = valore; 
        newNode->next = NULL; 

        if (Fine != NULL) 
        {
            Fine->next = newNode; 
        }
        Fine = newNode; 

        if (Inizio == NULL) 
        {
            Inizio = newNode; 
        }

    }

    void Rimuovi() 
    {
        if (Inizio != NULL) 
        {
            PNodo temp = Inizio; 
            Inizio = Inizio->next; 
            delete temp; 

            if (Inizio == NULL) 
            {
                Fine = NULL; 
            }
        }
    }

    int PrimoElemento() 
    {
        if (Inizio != NULL) 
        {
            return Inizio->Info; 
        }
        return 0; 
    }

    bool isEmpty() 
    {
        return Inizio == NULL;
    }
    
};

int main()
{
    Coda c;

    c.Inserisci(1); 
    c.Inserisci(2); 
    c.Inserisci(3); 

    cout << "Primo elemento della coda: " << c.PrimoElemento() << endl; 

    c.Rimuovi();

    cout << "Primo elemento dopo la rimozione: " << c.PrimoElemento() << endl; 

    return 0; 
}
    
