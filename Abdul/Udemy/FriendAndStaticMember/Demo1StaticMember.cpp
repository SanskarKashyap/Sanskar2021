#include <iostream>
using namespace std;

class Inova
{
public:
    static int price;
    static int getPrice()
    {
        return price;
    }
};
int Inova::price =20;

int main()
{
    Inova i1, i2, i3;
    cout << i1.getPrice() << endl ;
    cout << i1.price << endl;

    return 0;
}