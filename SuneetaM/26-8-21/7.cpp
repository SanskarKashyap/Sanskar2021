
#include <iostream>
using namespace std;
class A;
class B
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(B, A);
};
class A
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(B, A);
};
void add(B ob1, A ob2)
{
    cout << "\nSum of A and B = " << ob1.data + ob2.data;
}
int main()
{
    B x;
    A a;
    x.setValue(10);
    a.setValue(20);
    add(x, a);
    return 0;
}