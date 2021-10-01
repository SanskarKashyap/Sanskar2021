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

node *Merge()
{
    node *third, *last;
    third = new node;
    if (first->data < second->data)
    {
        third = last = first;
        first = first->next;
        last->next = NULL;
    }
    else
    {
        third = last = second;
        second = second->next;
        last->next = NULL;
    }
    while (first != NULL && second != NULL)
    {
        if (first->data < second->data)
        {
            last->next = first;
            last = first;
            first = first->next;
            last->next = NULL;
        }
        else
        {
            last->next = second;
            last = second;
            second = second->next;
            last->next = NULL;
        }
    }
    if (first != NULL)
    {
        last->next = first;
    }

    else
    {
        last->next = second;
    }

    return third;
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
    node *third = Merge();
    Display(third);

    return 0;
}