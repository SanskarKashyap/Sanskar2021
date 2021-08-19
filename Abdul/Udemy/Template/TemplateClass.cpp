#include <iostream>
using namespace std;

class Stack
{
private:
    int *stk;
    int top;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new int[size];
    }
    void push(int x);
    int Pop();
};

void Stack ::push(int a)
{
    if (top == size - 1)
        cout << "Stack is Full";
    else
    {
        top++;
        stk[top] = a;
    }
}
int Stack ::Pop()
{
    int x = 0;
    if (top == -1)
        cout << "Stack is Empty";
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}
int main()
{
    Stack S(10);
    S.push(12);
    S.push(13);
    S.push(14);
    S.push(155);

    cout << S.Pop();

    return 0;
}