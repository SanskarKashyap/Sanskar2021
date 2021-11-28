#include <iostream>
using namespace std;

class test
{
    int a;

public:
    test(int n = 0)
    {
        a = n;
    }
    void display()
    {
        cout << "Value of a : " << a << endl;
    }
    friend void operator++(test);
};
void operator++(test t)
{
    ++t.a;
};
int main()
{
    test n1(5), n2;
    n2 = ++n1;
    n1.display();
    n2.display();
}