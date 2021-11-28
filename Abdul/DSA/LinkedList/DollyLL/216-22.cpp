#include <iostream>
using namespace std;
struct Node
{
    struct Node *Prev;
    int data;
    struct Node *Next;
} *first = NULL;

void Create(int *A, int n)
{
    struct Node *last, *t;
    int i;
    first = new Node;
    first->data = A[0];
    first->Next = first->Prev = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->Next = last->Next;
        t->Prev = last;
        last->Next = t;
        last = t;
    }
}

void Display()
{
    struct Node *t;
    t = first;

    while (t)
    {
        cout << t->data << " ";
        t = t->Next;
    }
    cout << endl;
}
void insert(int a, int pos)
{
    Node *t;
    t = new Node;
    if (pos == 1) ///////// IF IT IS INSERTED AT FIRST POSITION THEN THIS CASE IS NESSEARY
    {

        t->data = a;
        t->Prev = NULL;
        t->Next = first;
        first->Prev = t;
        first = t;
    }
    else
    {
        Node *t_tail;
        t = first;
        for (int i = 1; i < pos; i++)
        {
            t_tail = t;
            t = t->Next;
        }
        Node *t_insert;
        t_insert = new Node;
        t_insert->data = a;
        t_insert->Prev = t_tail;
        t_tail->Next = t_insert;
        if (t) ///////// IF IT IS INSERTED AT LAST POSITION THEN THIS CASE IS NESSEARY
        {
            t_insert->Next = t;
            t->Prev = t_insert;
        }
        else
            t_insert->Next = NULL;
    }
}
int Count()
{
    static int n = 0;
    struct Node *t;
    t = first;
    while (t)
    {
        n++;
        t = t->Next;
    }
    return n;
}
void Delete(int pos)
{
    Node *t;
    t = first;
    if (pos == 1)
    {

        first = first->Next;
        first->Prev = NULL;
        delete (t);
    }
    else
    {
        for (int i = 1; i < pos; i++)
        {
            t = t->Next;
        }
        t->Prev->Next = t->Next;
        t->Next->Prev = t->Prev;
    }
}
void Reverse()
{
    Node *p, *temp;
    p = first;
    while (p)
    {
        temp = p->Next;
        p->Next = p->Prev;
        p->Prev = temp;
        p = p->Prev; // ///// /// THIS STETMENT IS RWITTTTTEN AS NEXT POINTER IS CHANGED TO PREVIOUS SO FOR GOING TO NEXT NODE WE HAVE TO DO P->PREV
        if (p)
        {
            first = p;
        }
    }
}
int main()
{
    int A[] = {9, 7, 1, 85, 4, 3, 6, 14};
    Create(A, 8);
    Display();
    insert(26, 9);
    Display();
    cout << "Size is : " << Count() << endl;
    Delete(3);
    Display();
    Reverse();
    Display();
    return 0;
}