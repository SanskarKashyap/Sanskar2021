// WAP to demonstrate the order of call of constructors and destructors in case of virtual base class .
#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << " Constructor of A is called " << endl;
    }
    ~A()
    {
        cout << " Destructor of A is called " << endl;
    }
};
class B : virtual public A
{
public:
    B()
    {
        cout << " Constructor of B is called " << endl;
    }
    ~B()
    {
        cout << " Distructor of B is called " << endl;
    }
};
class C : virtual public A
{
public:
    C()
    {
        cout << " Constructor of C is called " << endl;
    }
    ~C()
    {
        cout << " Distructor of C is called " << endl;
    }
};
class D : public B, public C
{
public:
    D()
    {
        cout << " Constructor of D is called " << endl;
    }
    ~D()
    {
        cout << " Distructor of D is called " << endl;
    }
};
int main()
{
    D d;
}