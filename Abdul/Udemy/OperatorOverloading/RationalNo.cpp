#include <iostream>
using namespace std;

class Rational
{
private:
    int Num;
    int Den;

public:
    Rational(int, int);
    void display();
    int GCD(int q1, int q2);
    friend Rational operator+(Rational r1, Rational r2);
    friend ostream &operator<<(ostream &out, Rational &r);
};

ostream &operator<<(ostream &out, Rational &r)
{
    out << r.Num << "/" << r.Den;
    return out;
}

Rational::Rational(int n = 0, int d = 1)
{
    Num = n;
    Den = d;
}

Rational operator+(Rational r1, Rational r2) //it is a funtion not the part of the class but as it
{                                            //is a friend of the class so it can access its private data member
    Rational temp;
    temp.Num = (r1.Num * r2.Den) + (r2.Num * r1.Den);
    temp.Den = (r2.Den * r1.Den);
    return temp;
}

int Rational::GCD(int q1, int q2)
{
    while (q1 != q2)
    {
        if (q1 > q2)
        {
            q1 = q1 - q2;
        }
        else
            q2 = q2 - q1;
    }
    return q1;
}

void Rational::display()
{

    cout << Num << "/" << Den << endl;
}

int main()
{
    Rational r1(2, 5), r2(1, 2), r3;
    r3 = r1 + r2;
    r3.display();
    cout << r3;
    cout << "\nSum of " << r1 << " + " << r2 << " is " << r3 << endl;
    return 0;
}