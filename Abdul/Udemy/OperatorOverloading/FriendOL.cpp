#include <iostream>
using namespace std;
class Complax
{
private:
    int real;
    int img;

public:
    // Complax(){};
    Complax(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
    friend Complax operator+(Complax, Complax); //
                                                //  if are using two or more objects in the parameter. Then we have to
                                                // make use of friend.
                                                // when both are of same class then we have 2 options.
                                                // 1. make operator as a member of class
                                                // 2. make it as friend
                                                // when 2 arguments are from different classes then there is only 1
                                                // option that is friend function
};

Complax operator+(Complax x, Complax y) //We don’t use scope resolution for friend functions. They are global functions.
{
    Complax temp;
    temp.real = x.real + y.real;
    temp.img = x.img + x.img;
    return temp;
}

int main()
{
    int a, b;
    cin >> a >> b;
    Complax c1(3, 6), c2(a, b), c3;

    c3 = c1 + c2;
    c3.display();

    return 0;
}