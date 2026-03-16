#include <iostream>

using namespace std;

struct Nodo // Struttura del nodo della coda
{
    int Info;
    Nodo* next;
};

typedef Nodo* PNodo;

class Coda
{
private:
    PNodo Inizio; // Puntatore al nodo di inizio della coda
    PNodo Fine; // Puntatore al nodo di fine della coda
public:
    Coda() // Costruttore della coda, inizializza la coda vuota
    {
        Inizio = NULL; // La coda è vuota, quindi il puntatore Inizio è NULL
        Fine = NULL; // La coda è vuota, quindi il puntatore Fine è NULL
    }

    void Inserisci(int valore) // Aggiunge un elemento alla fine della coda
    {
        PNodo newNode = new Nodo; // Crea un nuovo nodo
        newNode->Info = valore; // Assegna il valore al campo Info del nuovo nodo
        newNode->next = NULL; // Il campo next del nuovo nodo è NULL, poiché sarà l'ultimo nodo della coda

        if (Fine != NULL) // Se la coda non è vuota, collega il nuovo nodo al nodo di fine attuale
        {
            Fine->next = newNode; // Il campo next del nodo di fine attuale punta al nuovo nodo
        }
        Fine = newNode; // Il puntatore Fine ora punta al nuovo nodo, che è diventato il nuovo nodo di fine della coda

        if (Inizio == NULL) // Se la coda era vuota prima dell'inserimento, il puntatore Inizio deve anche puntare al nuovo nodo
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

    c.Rimuovi(); // Rimuove l'elemento all'inizio della coda

    cout << "Primo elemento dopo la rimozione: " << c.PrimoElemento() << endl; 

    return 0; 
}
    
