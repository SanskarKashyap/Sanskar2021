#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
} *first = NULL;

// void create(int *A, int n)
// {
//     node *t, *last;
//     first = new node;
//     first->data = A[0];
//     last = first;
//     for (int i = 1; i < n; i++)
//     {
//         t = new node;
//         t->data = A[i];
//         t->next = NULL;
//         last->next = t;
//         last = t;
//     }
// }

void Display(node *p)
{
    while (p)
    {
        cout << p->data << "\t";
        p = p->next;
    }
    cout << endl;
}

void Insert(int x)
{
    node *m, *t, *n;
    m = first;
    t = new node;
    t->data = x;
    t->next = NULL;
    if (first == NULL)
    {
        first = t;
        first->next = NULL;
    }
    else
    {
        while (m && m->data < x)
        {
            n = m;
            m = m->next;
        }
        if (m == first)
        {
            first = t;
            t->next = m;
        }
        else
        {
            n->next = t;
            t->next = m;
        }
    }
}

int main()
{
    // int A[] = {3, 5, 8, 14, 23, 45, 67};
    // create(A, 7);
    // Display(first);
    Insert(2);
    Insert(14);
    Insert(7);
    Display(first);
    return 0;
}