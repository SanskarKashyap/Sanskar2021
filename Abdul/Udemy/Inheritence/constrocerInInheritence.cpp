#include <iostream>

using namespace std;

class base
{
public:
    base()
    {
        cout << "Default is base " << endl;
    }
    base(int x)
    {
        cout << "palameterised of base " << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "Default is derived " << endl;
    }
    derived(int x)
    {
        cout << "palameterised of derived " << endl;
    }
    derived(int x, int y ):base(y)
    {
        cout << "palameterised of derived " << endl;
    }
};

int main()
{
    // base b ;
    // derived d ;      // if constructer of derived class is called ,,, then 1st default of base class is exsicuted 1st then command goes to derived class 
    // derived d(4) ; 
    derived d(4,10) ; 



    return 0;
}