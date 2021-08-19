#include <iostream>
using namespace std;

class Base
{
public:
    virtual void fun()                
    {
        cout << "Base is Displayed " << endl;
    }
};
class Derived : public Base
{
public:
    void fun()
    {
        cout << " Dwrived is dispalyed " << endl;
    }
};
int main()
{
    Derived d;
    Base *p = &d;
    p->fun();          // when a base class funtion is declared " VIRTUAL " then the funtion call is not based on a pointer , it is bassed on a object 

    return 0;
}