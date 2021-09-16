#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
} * first;
void create(int *A, int n)
{
    Node *last, *t;
    first = new Node;
    first->data = A[0];
    first = last;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void Display(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
int main()
{
    int A[] = {3, 5, 8, 14, 23, 45, 67};
    create(A, 7);
    Display(first);
    return 0;
}
