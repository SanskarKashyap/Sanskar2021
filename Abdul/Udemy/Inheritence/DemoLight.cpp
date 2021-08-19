#include <iostream>
using namespace std;

class base
{
public:
    int x;
    void display()
    {
        cout << " Display of Base " << endl;
    }
};

class Derived : public base
{
public:
    int y;
    void Show()
    {
        cout << x << " " << y;
    }
};

int main()
{
    Derived d, d1;
    d.display();
    d1.x = 10;
    d1.y = 25;
    d1.Show();

    return 0;
}