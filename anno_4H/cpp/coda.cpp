#include <iostream>

using namespace std;

struct coda
{
    int A[10];
    int i;
    int j;
};
void enqueue(coda &c, int elemento)
{
    c.A[c.j] = elemento;
    c.j = (c.j + 1);
}
int dequeue(coda &c){
    int elemento = c.A[c.i];
    c.i = (c.i + 1);  
    return elemento;
}
bool isEmpty(coda c){
    return c.i == c.j; // La coda è vuota se i e j sono uguali
}
int main()
{
    coda c;
    c.i = 0; // Inizializza la coda come vuota
    c.j = 0; // Inizializza j a 0
    enqueue(c, 1);
    enqueue(c, 2);
    enqueue(c, 3);
    cout << dequeue(c) << endl; // Output: 1
    cout << dequeue(c) << endl; // Output: 2
    cout << dequeue(c) << endl; // Output: 3
    cout << isEmpty(c) << endl; // Output: 1 (true)
    return 0;
}
