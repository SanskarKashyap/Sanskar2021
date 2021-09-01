#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    void input()
    {
        cout << "Enter real and imaginary part:" << endl;
        cin >> real >> imag;
    }
    friend complex sum(complex, complex);
    void display();
};
void complex::display()
{
    cout << "Sum of numbers:" << real << "+" << imag << "i";
}
complex sum(complex a, complex b)
{
    complex t;
    t.real = a.real + b.real;
    t.imag = a.imag + b.imag;
    return t;
}
int main()
{
    complex a, b, c;
    a.input();
    b.input();
    c = sum(a, b);
    c.display();
    return 0;
}
