#include <iostream>
using namespace std;
// int *front, *rear;
// front = rear = NULL;
class Node
{
public:
    int data;
    Node *next;
} *front = NULL, *rear = NULL;

void enqueue(int x)
{
    Node *t = new Node;

    if (t == NULL)
    {
        cout << "Queue is Full \n";
    }

    t->data = x;
    t->next = NULL;

    if (front == NULL)
    {
        front = rear = t;
    }
    else
    {
        rear->next = t;
        rear = t;
    }
}
int dequque()
{
    int x = -1;
    Node *p;
    if (front == NULL)
    {
        cout << " Queue is Empty \n";
    }
    else
    {
        p = front;
        front = front->next;
        x = p->data;
        free(p);
    }
    return x;
}

void Display(Node *dis)
{
    while (dis)
    {
        cout << dis->data << endl;
        dis = dis->next;
    }
    cout << endl;
}
int main()
{
    enqueue(5);
    enqueue(15);
    enqueue(25);
    enqueue(35);
    Display(front);
    dequque();
    dequque();
    dequque();
    dequque();
    dequque();
    Display(front);
    return 0;
}