#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
} * head, *first;

void create1(int *A, int n)
{
    node *last, *t;
    head = new node;
    head->data = A[0];
    head->next = head;
    last = head;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void Display(node *p)
{
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << endl;
}

void RDisplay(node *r)
{
    static int flag = 0;
    if (r != head || flag == 0)
    {
        flag = 1;
        cout << r->data << " ";
        RDisplay(r->next);
    }
    flag = 0;
}

void Insert(int pos, int x)
{
    node *in;
    in = head;
    node *t;
    t = new node;
    t->data = x;
    if (pos == 1)
    {
        if (head == NULL)
        {
            // node *t;
            // t = new node;
            // t->data = x;
            head = t;
            head->next = head;
        }

        while (in->next != head)
        {
            in = in->next;
        }
        // node *t;
        // t = new node;
        // t->data = x;
        t->next = head;
        in->next = t;
        head = t;
    }

    else
    {
        for (int i = 0; i < pos - 2; i++)
        {
            in = in->next;
        }
        // node *t;
        // t = new node;
        // t->data = x;
        t->next = in->next;
        in->next = t;
    }
}

int main()
{
    int A[] = {3, 5, 8, 14, 3, 45, 67};
    create1(A, 7);
    Display(head);
    Insert(1, 66);
    Insert(2, 77);
    RDisplay(head);
    return 0;
}