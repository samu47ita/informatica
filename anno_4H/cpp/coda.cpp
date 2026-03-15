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
    c.j = (c.j + 1) % 10; 
}
int dequeue(coda &c){
    int elemento = c.A[c.i];
    c.i = (c.i + 1) % 10; 
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
    enqueue(c, 5);
    enqueue(c, 10);
    enqueue(c, 15);
    cout << dequeue(c) << endl; // Output: 5
    cout << dequeue(c) << endl; // Output: 10
    cout << dequeue(c) << endl; // Output: 15
    cout << isEmpty(c) << endl; // Output: 1 (true)
    return 0;
}
