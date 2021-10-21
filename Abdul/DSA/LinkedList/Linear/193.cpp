#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;

} * first;
void create(int *A, int n)
{
    struct node *t, *last;
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

void Display(node *dis)
{
    while (dis)
    {
        cout << dis->data << "\t";
        dis = dis->next;
    }
    cout << "\n";
}
int delete_first()
{
    node *q;
    q = first;
    int x = first->data;
    first = first->next;
    delete q;
    return x;
}
int count()
{
    node *coun;
    coun = first;
    int count = 0;
    while (coun)
    {
        count++;
        coun = coun->next;
    }
    return count;
}
void Delete_pos(int pos)
{
    node *p, *q;
    p = new node;
    q = new node;
    p = first;
    int position = 0;

    if (pos > -1 && pos < count())
    {

        while (pos != position)
        {
            q = p;
            p = p->next;
            position++;
        }
        q->next = p->next;
        delete p;
    }
}

int main()
{
    int A[] = {2, 4, 7, 9, 12};
    create(A, 5);
    Display(first);
    cout << count() << "\n";
    delete_first();
    Display(first);
    cout << count() << "\n";
    Delete_pos(2);
    Display(first);
    cout << count() << "\n";
    return 0;
}