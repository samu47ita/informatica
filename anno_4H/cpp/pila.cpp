#include <iostream>

 
using namespace std;

struct pila
{
    int A[10];

    int i;
    
};
void push(pila &p, int elemento)
{
    p.A[p.i] = elemento;
    p.i++;
} 
int pop (pila &p)
{
    int elemento = p.A[p.i -1];
    p.i--;
    return elemento;
}
bool isEmpty(pila p)
{
    return p.i == 0;
}
int main()
{  
    pila p;
    p.i = 0; // Inizializza la pila come vuota
    push(p, 5);
    push(p, 10);
    push(p, 15);
    cout << pop(p) << endl; // Output: 15
    cout << pop(p) << endl; // Output: 10
    cout << pop(p) << endl; // Output: 5
    cout << isEmpty(p) << endl; // Output: 1 (true)
    
    return 0;
}