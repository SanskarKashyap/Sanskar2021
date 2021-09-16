#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    Complex operator-(Complex c);
    // {
    //     Complex temp;
    //     temp.real = real - c.real;
    //     temp.img = img - c.img;                  //can be solved using scope resolution
    //     return temp;
    // }
    int getReal();
    int getimg();
};

Complex Complex ::operator-(Complex c)
{
    Complex temp;
    temp.real = real - c.real;
    temp.img = img - c.img;
    return temp;
}
int Complex::getReal()
{
    return real;
}
int Complex::getimg()
{
    return img;
}

int main()
{
    Complex c3;
    Complex c1(3, 7);
    Complex c2(8, 9);
    // x=c1.sub(c2);
    c3 = c2 - c1;

    if (c3.getimg() > 0)
    {
        cout << c3.getReal() << " + " << c3.getimg() << "i" << endl;
    }

    else
        cout << c3.getReal() << " + " << c3.getimg() << "i" << endl;

    return 0;
}