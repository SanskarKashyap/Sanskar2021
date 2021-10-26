#include <iostream>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st)
{
    cout << "Enter Size : ";
    cin >> st->size;
    st->top = -1;
    st->S = new int[st->size];
}

void push(struct Stack *st, int x)
{
    if (st->top == st->size - 1)
    {
        cout << "Staack Overflow\n";
    }
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}
int pop(struct Stack *st)
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
int peek(struct Stack st, int pos)
{
    int x = -1;
    if (st.top - pos + 1 == -1)
    {
        cout << "Invalid Position\n";
    }
    else
    {
        x = st.S[st.top - pos + 1];
    }
    return x;
}

void Display(struct Stack st)
{
    int i;
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.S[i] << " ";
    }
    cout << endl;
}

int main()
{
    struct Stack sta;
    create(&sta);
    push(&sta, 5);
    push(&sta, 15);
    push(&sta, 52);
    push(&sta, 82);
    push(&sta, 24);

    cout <<"Peek : "<< peek(sta, 3) << endl;

    cout << pop(&sta) << endl;
    cout << pop(&sta) << endl;
    cout << pop(&sta) << endl;
    cout << pop(&sta) << endl;
    cout << pop(&sta) << endl;
    cout << pop(&sta) << endl;
    cout << pop(&sta) << endl;

    Display(sta);

    return 0;
}