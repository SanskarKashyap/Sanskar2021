#include <iostream>
using namespace std;

class A
{
    int a[5];

public:
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> a[i];
        }
    }

    friend class C;
};
class B
{
    int b[5];

public:
    friend class C;
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> b[i];
        }
    }
};
class C
{
    int b[5];

public:
    void input(class A, class B)
    {
        for (int i = 0; i < 5; i++)
        {
            cout << A.a[i] + b[i];
        }
    }
};
