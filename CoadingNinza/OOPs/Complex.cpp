

#include <iostream>
using namespace std;
class ComplexNumbers
{
private:
    int real, imaginary;

public:
    ComplexNumbers()
    {
    }
    ComplexNumbers(int real, int img)
    {
        this->real = real;
        imaginary = img;
    }
    void print()
    {
        cout << real << " " << imaginary;
    }
    void plus(ComplexNumbers c2)
    {
        this->real = real + c2.real;
        imaginary = imaginary + c2.imaginary;
    }
    void multiply(ComplexNumbers c2)
    {
        ComplexNumbers c3;
        c3.real = (real * c2.real) - (imaginary * c2.imaginary);
        c3.imaginary = (real * c2.imaginary) + (c2.real * imaginary);
        real = c3.real;
        imaginary = c3.imaginary;
    }
};

int main()
{
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1)
    {
        c1.plus(c2);
        c1.print();
    }
    else if (choice == 2)
    {
        c1.multiply(c2);
        c1.print();
    }
    else
    {
        return 0;
    }
}
