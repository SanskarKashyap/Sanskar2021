#include <iostream>
using namespace std;

class node
{
public:
    char data;
    struct node *next;
};

class Stack
{
private:
    node *top;

public:
    Stack() { top = NULL; };
    void push(char x);
    char pop();
    void display();
    int isEmpty();
    int isBalenc(char *exp);
};

void Stack::push(char x)
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

char Stack::pop()
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

int Stack::isEmpty()
{
    if (top == NULL)
    {
        return true;
    }
    else
        return false;
}

int Stack::isBalenc(char *exp)
{

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (top == NULL)
                return false;
            else
                pop();
        }
        else
        {
            //
        }
    }
    return top == NULL ? 1 : 0;
}

int main()
{
    class Stack st;
    char exp[] = {"((a+b+c)*(c+d)*t)"};
    cout << st.isBalenc(exp);
    return 0;
}