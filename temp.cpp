#include <iostream>
using namespace std;

class Complex
{

public:
    int real, imaginary;
    Complex(int tempReal = 0, int tempImaginary = 0)
    {
        real = tempReal;
        imaginary = tempImaginary;
    }

    Complex addComp(Complex C2)
    {
        Complex temp;

        real = real + C2.real;

        imaginary = imaginary + C2.imaginary;

        return temp;
    }
};

int main()
{
    int a, b, c, d;
    cout << "\nEnter 1St complex No : ";
    cin >> a >> b;

    Complex C1(a, b);

    cout << "Complex number 1 : " << C1.real << " + "
         << C1.imaginary << " i" << endl;
    cout << "\nEnter 2nd complex No : ";
    cin >> c >> d;
    Complex C2(c, d);

    cout << "Complex number 2 : " << C2.real << " + "
         << C2.imaginary << " i" << endl;

    C1.addComp(C2);

    cout << "Sum of complex number : "
         << C1.real << " + "
         << C1.imaginary
         << " i";
}