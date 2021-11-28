#include <iostream>
using namespace std;
class Distances
{
private:
    int ft{0};
    int i{0};

public:
    void set_value(int feet, int inches)
    {
        ft = feet;
        i = inches;
    }
    Distances &operator+(Distances &d)
    {
        int feet = this->ft + d.ft;
        int inches = this->i + d.i;
        if (inches > 12)
        {

            int extra = inches / 12;

            feet += extra;
            inches -= (extra * 12);
        }
        Distances *dis = new Distances;
        dis->set_value(feet, inches);
        return *dis;
        delete dis;
    }
    void display()
    {
        cout << this->ft << " feets & " << this->i << " inches\n";
    }
    Distances &operator+(int n)
    { /// ADDING TWO DISTANCES
        int feet{this->ft};
        int inc = this->i + n;
        if (inc > 12)
        {
            int extra = inc / 12;
            feet += extra;
            inc -= (extra * 12);
        }
        Distances *dis = new Distances;
        dis->set_value(feet, inc);
        return *dis;
        delete dis;
    }
    Distances operator>(Distances &c)
    {
        int total_d1 = this->ft * 12 + this->i;
        int total_d2 = c.ft * 12 + c.i;
        if (total_d1 > total_d2)
            return *this;
        else
            return c;
    }
    void operator==(Distances &c)
    {
        if ((this->ft == c.ft) && (this->i == c.i))
            cout << "EQUAL\n";
        else
            cout << "NOT EQUAL\n";
    }
};

int main()
{
    Distances c1, c2;
    c1.set_value(5, 10);
    c2.set_value(8, 4);
    Distances c3 = c1 + c2;
    Distances c4 = c2 + 2;
    c3.display();
    c4.display();
    Distances c5 = c3 > c4;
    c5.display();
    c5 == c3;
}