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
// void Display(node *p)
// {
//     while (p)
//     {
//         cout << p->data << "\t";
//         p = p->next;
//     }
//     cout << endl;
// }
int cheak()
{
    node *ch;
    ch = new node;
    int x = INT16_MIN;
    ch = first;
    while (ch)
    {
        if (x > ch->data)
        {
            return -1;
        }
        else
        {
            x = ch->data;
            ch = ch->next;
        }
    }
    return 1;
}

int main()
{
    int A[] = {3, 5, 8, 14, 3, 45, 67};
    create(A, 7);
    Display();
    cout << "\n"
         << cheak();

    // Display(first);
    return 0;
}