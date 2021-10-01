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
    node *dis;
    dis = new node;
    dis = first;
    while (dis)
    {
        cout << dis->data << " \t ";
        dis = dis->next;
    }
    cout << " \n ";
}

void Remove_Duplicate()
{
    node *p, *q;
    p = new node;
    q = new node;
    q = first;
    p = first->next;

    while (p)
    {
        if (q->data == p->data)
        {
            q->next = p->next;
            free(p);
            p = q->next;
        }
        else
        {
            p = p->next;
            q = q->next;
        }
    }
}

int main()
{
    int A[] = {3, 3, 8, 14, 67, 67, 67};
    create(A, 7);
    Display();
    Remove_Duplicate();
    Display();

    return 0;
}