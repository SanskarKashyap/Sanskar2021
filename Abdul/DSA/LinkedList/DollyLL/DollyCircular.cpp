#include <iostream>
using namespace std;

struct Node
{
    struct Node *Next;
    struct Node *Prev;
    int Data;
} *head = NULL;

void Create(int *A, int n)
{
    Node *t, *last;
    head = new Node;
    head->Data = A[0];
    head->Next = head;
    head->Prev = head;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->Data = A[i];
        t->Prev = last;
        t->Next = t->Prev->Next;
        t->Prev->Next = t;
        t->Prev->Prev = t;
        last = t;
    }
}

void Display()
{
    Node *p;
    p = head;
    do
    {
        cout << p->Data << "  ";
        p = p->Next;
    } while (p != head);
}

int main()
{
    int A[] = {5, 8, 9, 14, 26, 3, 4, 38, 47};
    Create(A, 9);
    Display();
}