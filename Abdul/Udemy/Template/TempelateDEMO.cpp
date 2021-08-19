#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    T *stk;
    int top;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new T[size];
    }
    void push(T x);
    T Pop();
};
template <class T>
void Stack<T> ::push(T a)
{
    if (top == size - 1)
        cout << "Stack is Full";
    else 
    { 
        top++;
        stk[top] = a; 
    }
}
template <class T>
T Stack<T> ::Pop()
{
    T x = 0;
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
    Stack<int> S(10);
    S.push(12);
    S.push(13);
    S.push(14);
    S.push(155);

    cout << S.Pop();

    return 0;
}