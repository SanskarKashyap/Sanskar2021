#include <iostream>
using namespace std;
class complax
{
private:
    int real;
    int img;

public:
    complax(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }
    friend complax operator+(complax, complax);
    // void display();                                        // now i want to use "cout<<c3 ;"  instead of "c3.display(); "
    //
    friend ostream &operator<<(ostream &, complax c);
};
complax operator+(complax a, complax b)
{
    complax temp;
    temp.real = a.real + b.real; // Insertion Operator Overloading
    temp.img = a.img + b.img;
    return temp;
}
// void complax ::display ()
// {
//     cout<<real << " + "<<img<<"i";                         // now i want to use "cout<<c3 ;"  instead of "c3.display(); "
// }
//
ostream &operator<<(ostream &out, complax c) // we can use "void" instead of "ostream &" but it can't be used for
                                             // the countinous output in line 44
{
    cout << c.real << " + " << c.img << "i";
    return out;
}

int main()
{
    complax c1(2, 4), c2(9, 0), c3;
    c3 = c1 + c2;
    // c3.display();                                         // now i want to use "cout<<c3 ;"  instead of "c3.display(); "
    cout << c3 << endl;
    operator<<(cout, c3); //line 44 and 45 are same

    return 0;
}