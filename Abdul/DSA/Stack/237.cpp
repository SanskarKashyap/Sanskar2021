// sstack USIng linklist
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *top = NULL;

void push(int x)
{
    struct node *t;
    t = new node;
    if (t == NULL)
    {
        cout << "\nStack Overflow\n";
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop()
{
    struct node *t;
    int x = -1;
    if (top == NULL)
    {
        cout << "\nStack is Empty \n";
    }
    else
    {
        t = top;
        x = t->data;
        top = top->next;
        free(t);
    }
    return x;
}
void display()
{
    while (top)
    {
        cout << top->data << " ";
        top = top->next;
    }
}

int main()
{
    push(5);
    push(15);
    push(52);

    cout << pop() << " pop ";
    cout << pop();
    pop();
    pop();
    display();
    return 0;
}