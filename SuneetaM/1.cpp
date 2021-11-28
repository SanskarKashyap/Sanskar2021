#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "In class A\n";
    }
};
class B
{
public:
    {
        cout << "In class B\n";
    }
};
class C : public B, public A
{
public:
    C() : A(), B()
    {
        cout << "In class C\n";
    }
};
int main()
{
    C C1;
    return 0;
}
