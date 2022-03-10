#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueu(int x)
{
    Node *t = new Node;
    if (t == NULL)
    {
        cout << "Queue is full" << endl;
    }
    else
    {
        t->data = x;
        t->next = NULL;

        if (rear == NULL)
        {
            front = rear = t;
        }
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}
int dequeue()
{
    int x = -1;
    if (front == NULL)
    {
        cout << "Queue is Empty ";
    }

    Node *p = front;
    front = front->next;
    x = p->data;
    free(p);
    return x;
}
void Display()
{
    Node *dis = front;

    while (dis)
    {
        cout << dis->data << " ";
        dis = dis->next;
    }
    cout << endl;
}
int main()
{
    enqueu(5);
    enqueu(15);
    enqueu(52);
    enqueu(56);
    enqueu(75);
    Display();

    Node *rec = front;
    while (rec)
    {
        dequeue();
        Display();
        rec = rec->next;
    }

    return 0;
}