#include <iostream>
using namespace std;
class base
{
public:
    void func1()
    {
        cout << " Base Class fun 1 " << endl;
    }
};
class derived : public base
{
public:
    void func2()
    {
        cout << " Derived Class fun 2 " << endl;
    }
};
int main()
{
    derived d;
    d.func1();
    d.func2();

    base *p;
    p = new derived();
    p->func1();
    // p->func2() ;     ////  Error occur----> {as pointer is of base class , base dont thave the derived  features }

    return 0;
}