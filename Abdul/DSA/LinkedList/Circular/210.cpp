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
        cout << p->data << endl;
        p = p->next;
    } while (p != head);
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
int main()
{
    int A[] = {3, 5, 8, 14, 3, 45, 67};
    create1(A, 7);
    // RDisplay(head);
    Display(head);
    return 0;
}