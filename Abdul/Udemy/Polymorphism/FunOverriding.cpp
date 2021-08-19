#include <iostream >
using namespace std;

class Base
{
public:
    void display()
    {
        cout << " Display of Base ";
    }
};
class Derivedn :public Base 
{
public:
    void display( )      // ( int n )
    {
        cout << " Display of Derived ";
    }
};
int main ()
{
    Derivedn d ;               //signature/prototype of display() funtion must be same to perform funtion overridding 
    d.display();               // {It is a funtion not a constructor so base class is not executed  } Inheritence\constrocerInInheritence.cpp
    d.Base::display();         // we can skip overriding by using scoperesolution OR by passing argument 
    // d.display(10);
}