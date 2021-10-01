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

void Display()
{
    node *Dis;
    Dis = first;
    while (Dis)
    {
        cout << Dis->data << "\t";
        Dis = Dis->next;
    }
    cout << endl;
}

void ReverseLink()
{
    node *p = NULL, *q = NULL, *r;
    p = first;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void RecurReverse(node *q, node *p)
{
    if (p != NULL)
    {
        RecurReverse(p, p->next);
        p->next = q;
    }
    else
        first = q;
}

int main()
{
    int A[] = {4, 6, 8, 9, 13, 25, 36, 43};
    create(A, 8);
    Display();
    ReverseLink();
    Display();
    node *l, *k = NULL;
    l = first;
    RecurReverse(k, l);
    Display();
    return 0;
}