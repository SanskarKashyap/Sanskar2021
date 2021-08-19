#include <iostream>
using namespace std;
class fraction
{
private:
    int numerator;
    int denominator;

public:
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    void display()
    {
        cout << numerator << " / " << denominator << endl;
    }
    // void simplify()
    // {
    //     int gcd = 1;
    //     int j = min(this->numerator, this->denominator);
    //     for (int i = 1; i <= j; i++)
    //     {
    //         if (this->numerator % i == 0 && this->denominator % i == 0)
    //         {
    //             gcd = i;
    //         }
    //     }
    //     cout << gcd<<endl;
    //     this->numerator = this->numerator / gcd;
    //     this->denominator = this->denominator / gcd;
    // }
    void simplify()
    {
        int gcd = 1;
        int j = min(numerator, denominator);
        for (int i = 1; i <= j; i++)
        {
            if (numerator % i == 0 && denominator % i == 0)
            {
                gcd = i;
            }
        }
        // cout << gcd << endl;
        numerator = numerator / gcd;
        denominator = denominator / gcd;
    }

    
    // void add(fraction f2)
    //void add(fraction &f2)//                / we can use refrence to avoid unnesecary copy of the object
    void add(fraction const &f2) //             / in constant refrence object value cant be modified by funtion
    {
        int lcm = denominator * f2.denominator;
        int num = (numerator * f2.denominator) + (f2.numerator * denominator);
        // int x = lcm / denominator;
        // int y = lcm / f2.denominator;
        // int num = x * numerator + (y * f2.numerator);

        numerator = num;
        denominator = lcm;
        // this->simplify();
        simplify();
    }
    void multiply(fraction const &fk)
    {
        numerator = numerator * fk.numerator;
        denominator = denominator * fk.denominator;
        simplify();
    }
};

int main()
{
    fraction f1(1, 5), f2(3, 5);
    f1.add(f2);
    f1.display();
    f2.display();
    cout << endl;
    f1.multiply(f2);
    f1.display();
    f2.display();
    return 0;
}