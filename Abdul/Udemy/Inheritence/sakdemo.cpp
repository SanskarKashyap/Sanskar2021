#include <iostream>
#include <iomanip>
using namespace std;

class base
{
private:
protected:
    int x;

public:
    int y;
};
class derived : public base
{
private:
protected:
public:
    x = 10;
};
class derived2 : public derived
{
private:
protected:
public:
};
int main()
{
    base a;
    derived b;
    derived2 c;
    // a.x = 10;
    a.y = 10;
}