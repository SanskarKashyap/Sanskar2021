#include <iostream>
using namespace std;

class Integer
{
private:
    int i;

public:
    Integer(int i = 0)
    {
        this->i = i;
    }

    Integer operator--()
    {
        Integer temp;
        temp.i = --i;
        if (temp.i != 0)
        {
            return temp;
        }
        else
        {
            throw 0;
        }
    }

    void display()
    {
        cout << "i = " << i << endl;
    }
};

int main()
{
    int a;
    cout << "Enter a number gratter then 1\n";
    cin >> a;
    Integer i1(a);

    cout << "\nBefore decrement: ";
    i1.display();

    try
    {
        Integer i2 = --i1;

        cout << "After pre decrement: ";
        i2.display();
    }
    catch (int x)
    {
        cout << "\n !!! Error : Enter a number gratter then 1 \n"
             << endl;
    }
}