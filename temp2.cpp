#include <iostream>
using namespace std;
struct stack
{
    int top;
    int size;
    int *S;
};

void create(stack *st)
{

    cin >> st->size;
    st->S = new int(st->size);
    st->top = -1;
}
void display(stack st)
{
    for (int i = st.size-1; i >= 0; i--)
    {
        cout << st.S[i] << " ";
    }
    cout << endl;
}
void push(stack *st, int element)
{

    if (st->top == st->size - 1)
    {
        cout << "Stack is full:( " << endl;
    }
    else
    {
        st->S[st->top] = element;
        st->top++;
    }
}
int pop(stack *st)
{
    int x = -1;
    if (st->top == -1)
    {
        cout << "Stack is empty, there is no element to delete" << endl;
    }
    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}
int main()
{
    stack st;
    create(&st);
    push(&st, 10);
    push(&st, 12);
    push(&st, 15);
    push(&st, 19);
    display(st);


    return 0;
}