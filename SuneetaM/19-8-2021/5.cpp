// 5. wap to create a class life with data member manufacturing year and expiring year and yr to calculate
//life of the product.Take a input function to initalize
// 	the data members using a function calculate life of the product through
//       i> pass by value ii> pass by refrence iii>pass by address

#include <iostream>
using namespace std;
class Product
{
private:
    int manuf;
    int exp;

public:
    Product(int m = 0, int ex = 0)
    {
        manuf = m;
        exp = ex;
    }
    void setData(int m, int ex)
    {
        manuf = m;
        exp = ex;
    }
    int getM()
    {
        return manuf;
    }
    int getE()
    {
        return exp;
    }

    void life()
    {
        cout << exp - manuf << endl;
    }
    void life1(int ex, int manu)
    {
        cout << "By Value " << ex - manu << endl;
    }
    void life2(int &ex, int &manu)
    {
        cout << "By refrence " << exp - manuf << endl;
    }
    void life3(int *ex, int *manu)
    {
        cout << "by address " << exp - manuf << endl;
    }
};

int main()
{
    int a, b;
    cout << "Input the manufacturing year" << endl;
    cin >> a;
    cout << "Input the expiring year" << endl;
    cin >> b;
    Product p;

    p.setData(a, b);

    p.life();
    p.life1(p.getE(), p.getM());
    p.life2(a, b);
    p.life3(&a, &b);

    return 0;
}