// sstack USIng linklist
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    struct node *next;
};

class Stack
{
private:
    node *top;

public:
    Stack() { top = NULL; };
    void push(int x);
    int pop();
    void display();
};

void Stack::push(int x)
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

int Stack::pop()
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

void Stack::display()
{
    node *k = top;
    while (k)
    {
        cout << k->data << " ";
        k = k->next;
    }
}

int main()
{
    class Stack st;
    st.push(5);
    st.push(15);
    st.push(52);
    st.display();

    cout << st.pop()<<" ";
    cout << st.pop()<<" ";
    cout << st.pop()<<" ";
    cout << st.pop()<<" ";
    // st.display();
    return 0;
}