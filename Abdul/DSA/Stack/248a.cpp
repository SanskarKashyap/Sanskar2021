#include <iostream>
#include <cstring>
using namespace std;
class Node
{
private:
public:
    char data;
    Node *next;
};
class Stack
{
private:
    Node *first;

public:
    Stack();
    ~Stack();
    void input(char *str);
    void push(char a);
    char pop();
    void Display();
    int pre(char x);
    char *InToPost(char *infix);
};

void Stack::push(char a)
{
    Node *t;
    t = new Node;
    if (t == NULL)
    {
        cout << "\nStack Overflaw" << endl;
    }
    else
    {
        t->data = a;
        t->next = first;
        first = t;
    }
}

void Stack ::input(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        push(str[i]);
    }
}

char Stack::pop()
{
    Node *t;
    char x = -1;
    if (first == NULL)
    {
        cout << "\nStack is empty";
    }
    else
    {
        t = first;
        x = t->data;
        first = first->next;
        free(t);
    }
    return x;
}

void Stack::Display()
{
    Node *t;
    t = first;
    while (t)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << endl;
}

Stack::Stack()
{
    first = NULL;
}

Stack::~Stack()
{
}
int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return 0;
    else
        return 1;
}

int Stack::pre(char x)

{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    return 0;
}

char *Stack::InToPost(char *infix)
{
    int i = 0, j = 0;
    char *postfix;
    int len = strlen(infix);
    postfix = (char *)malloc((len + 2) * sizeof(char));

    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else
        {
            if (pre(infix[i]) > pre(first->data))
                push(infix[i++]);
            else
            {
                postfix[j++] = pop();
            }
        }
    }
    while (first != NULL)
        postfix[j++] = pop();

    postfix[j] = '\0';
    return postfix;
}

// 9835145577
int main()
{
    Stack st;
    // st.input("hello world 568");
    char *infix = "a+b*c-d/e";
    // st.push('#');

    char *postfix = st.InToPost(infix);
    printf("%s ", postfix);

    st.Display();
    cout << st.pop() << endl;
    st.Display();
    return 0;
}