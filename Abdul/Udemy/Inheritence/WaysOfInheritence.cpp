#include <iostream>
using namespace std;
class parent
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void funparent()
    {
        a = 2;
        b = 5;
        c = 9;
    }
};
class child : public parent //protected
{
private:
protected:
public:
    void funchild()
    {
        // a = 2;
        b = 5;
        c = 9;
    }
};
class grand_child : public child
{
private:
protected:
public:
    void funchild()
    {
        // a = 2;
        b = 5;              // protected part can be passed to grand- cild .. but non in main funtion 
        c = 9;
    }
};
int main()
{
    child c;
    c.funchild();
    // cout << c.b;             // as b is protected in parent class hence in child also it is protected
                                // if in child class parent is inharited in protected way ,, then the data goes to protected part only
    cout << c.c;               
    return 0;
}