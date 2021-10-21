#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
} * first, *second;

void create(int *K, node *cr, int n)
{
    node *t, *last;
    // cr = new node;
    cr->data = K[0];
    last = cr;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = K[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(node *D)
{
    node *Dis;
    Dis = D;
    while (Dis)
    {
        cout << Dis->data << "\t";
        Dis = Dis->next;
    }
    cout << endl;
}

void Concatenation()
{
    cout << "### 1 ###" << endl;
    node *p;
    p = first;
    while (p->next)
    {
        p = p->next;
        cout << "### 2 ###" << endl;
    }
    p->next = second;
    second = NULL;
    cout << "### 3 ###" << endl;
}

int main()
{
    first = new node;
    second = new node;

    int A[] = {4, 6, 8, 9, 13, 25, 36, 43};
    create(A, first, 8);
    Display(first);
    int B[] = {3, 5, 8, 14, 23, 45, 67};
    create(B, second, 7);
    Display(second);
    Concatenation();
    Display(first);
    return 0;
}