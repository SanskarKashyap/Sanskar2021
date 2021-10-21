#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
} * first, *second;

void create(int *A, node *cr, int n)
{
    node *t, *last;
    // cr = new node;
    cr->data = A[0];
    last = cr;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(node *n)
{
    node *dis = n;

    while (dis)
    {
        cout << dis->data << "\t";
        dis = dis->next;
    }
    cout << "\n";
}

int CheakLoop(node *cl)
{
    node *n1, *n2;
    n1 = n2 = cl;
    do
    {
        n1 = n1->next;
        n2 = n2->next;
        n2 = n2 ? n2->next : NULL;

    } while (n1 && n2 && n1 != n2);
    return n1 == n2 ? 1 : 0;
}

int main()
{
    first = new node;
    second = new node;
    int A[] = {2, 5, 9, 14, 19, 24, 46, 58};
    int B[] = {4, 8, 15, 18, 29, 34, 48};
    create(A, first, 8);
    Display(first);
    create(B, second, 7);
    Display(second);
    node *t1, *t2;
    t1 = first->next->next->next;
    t2 = first->next->next->next->next->next->next->next;
    t2->next = t1;
    cout << CheakLoop(first) << endl;
    cout << CheakLoop(second) << endl;

    return 0;
}