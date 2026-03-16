#include <iostream>
#include <string>

using namespace std;

struct Nodo 
{
    int info;
    Nodo* next;
};

typedef Nodo* PNodo;

class Pila 
{
    private: 

        struct Nodo* top; 

    public: 

        Pila() 
        {
            top = NULL; 
        }

        void push(int valore) 
        {
            Nodo* newNode = new  Nodo; 
            newNode->info = valore; 
            newNode->next = top; 
            top = newNode; 
        }

        void pop() 
        {
            if (top != NULL)
            {
                Nodo* temp = top; 
                top = top->next; 
                delete temp; 
            }
        }

        int Top() 
        {
            if (top != NULL) 
            {
                return top->info; 
            }
            return 0;
        }

        bool isEmpty() 
        {
            return top == NULL;
        }

        void stampa() 
        {
            Nodo* x = top; 
            while (x != NULL) 
            {
                cout << x->info << " ";

                x = x->next; 
            }

            cout << endl; 
        }
};

int main()
{
    Pila pila; 

    pila.push(1); 
    pila.push(2); 
    pila.push(3); 

    cout << "Elementi nella pila: "; 
    pila.stampa();

    cout << "Elemento in cima alla pila: " << pila.Top() << endl; 

    pila.pop();

    cout << "Elementi nella pila dopo pop: "; 
    pila.stampa(); 

    return 0; 
}