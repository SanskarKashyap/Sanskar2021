#include <iostream>
using namespace std;

class Rational
{
private:
    int Num;
    int Den;

public:
    Rational(int n = 0, int d = 1)
    {
        Num = n;
        Den = d;
    }

    void display()
    {

        cout << Num << "/" << Den;
    }
    int GCD(int q1, int q2)
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
    friend Rational operator+(Rational r1, Rational r2);
};
Rational operator+(Rational r1, Rational r2)
{
    Rational temp;
    temp.Num = (r1.Num * r2.Den) + (r2.Num * r1.Den);
    temp.Den = (r2.Den * r1.Den);
    return temp;
}

int main()
{
    Rational r1(2, 5), r2(1, 2), r3;
    r3 = r1 + r2;
    r3.display();
    return 0;
}