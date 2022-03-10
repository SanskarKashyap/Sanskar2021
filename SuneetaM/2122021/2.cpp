#include <iostream>
#include <string.h>
using namespace std;
class A2_825;
class A3_825;
class A1_825
{
    char firstname825[50];

public:
    A1_825()
    {
        cout << "Enter first name:";
        cin >> firstname825;
    }
    friend A3_825 operator+(A1_825 &a, A2_825 &b);
};
class A2_825
{
    char lastname825[50];

public:
    A2_825()
    {
        cout << "ENter last name:";
        cin >> lastname825;
    }
    friend A3_825 operator+(A1_825 &a, A2_825 &b);
};
class A3_825
{
    char fullname825[50];

public:
    void concat(char *x, char *y)
    {
        strcpy(fullname825, x);
        strcat(fullname825, y);
    }
    void display()
    {
        cout << fullname825 << endl;
    }
    friend A3_825 operator+(A1_825 &a, A2_825 &b);
};
A3_825 operator+(A1_825 &a, A2_825 &b)
{
    A3_825 z;
    z.concat(a.firstname825, b.lastname825);
    return z;
}
int main()
{
    A1_825 a;
    A2_825 b;
    A3_825 c;
    c = a + b;
    c.display();
    return 0;
}