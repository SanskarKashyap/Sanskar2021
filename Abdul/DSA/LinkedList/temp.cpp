#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;

} * first;

void create(int *A, int n)
{
    node *t, *last;
    first = new node;
    first->data = A[0];
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(node *d)
{
    while (d)
    {
        cout << d->data << "\t";
        d = d->next;
    }
    cout << endl;
}

void insert(int x)
{
    node *p, *t, *q;
    p = first;

    t = new node;
    t->data = x;
    t->next = NULL;
    if (first == NULL)
    {
        first = t;
    }
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            first = t;
            t->next = first->next;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}

int main()
{
    int A[] = {3, 5, 7, 9, 13, 25, 56, 72};
    create(A, 8);
    Display(first);
    insert(84);
    insert(30);
    insert(4);
    insert(2);
    Display(first);
    return 0;
}