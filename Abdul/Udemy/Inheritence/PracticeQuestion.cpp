#include <iostream>
using namespace std;
class Viv;
class Test
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend int fun1();
    friend class Viv;
};
int fun1()
{
    Test t;
    t.a = 999; // can't acess a & b without friend
    t.b = 99;
    t.c = 9;

    return t.c, t.a, t.b;
}
class Viv
{
public:
    Test D;
    int fun2()
    {
        cout << fun1() << endl;
        D.a = 3;
        D.b = 33;
        D.c = 333;
        return D.c;
    }
};
int main()
{
    Viv v;

    cout << v.fun2();
    return 0;
}