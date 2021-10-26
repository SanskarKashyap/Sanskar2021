#include <iostream>
#include <string.h>
using namespace std;

struct Stack
{
    int size;
    int top = -1;
    char *S;
};

void Push(Stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "\nStack Ovarflow\n";
    }
    else
    {
        st->S[st->top] = x;
        st->top++;
    }
}

int Pop(Stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        cout << "\nStack Underflow\n";
    }
    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}

void Display(struct Stack st)
{
    while (st.top = -1)
    {
        cout << st.S[st.top] << " ";
        st.top--;
    }
    cout << "\n";
}

int isEmpty(Stack st)
{
    if (st.top == -1)
    {
        return true;
    }
    else
        return false;
}

int isBalence(char *exp)
{
    struct Stack st;
    st.size = strlen(exp);
    st.top = -1;
    st.S = new char[st.size];

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            Push(&st, exp[i]);
        }
        else if (exp[i] = ')')
        {
            if (isEmpty(st))
                return false;
            else
                Pop(&st);
        }
    }
    return isEmpty(st) ? true : false;
}

int main()
{
    char exp[] = {"((a+b)*(c-d))"};
    cout << isBalence(exp);

    return 0;
}