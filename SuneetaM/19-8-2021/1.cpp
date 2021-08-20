// 1. wap to calculate area of a triangle using default and actual values where the formula
// is 1/2 x l x b.

#include <iostream>
using namespace std;

class triangle
{
private:
    int l;
    int b;

public:
    triangle(int len = 0, int wid = 0)
    {
        l = len;
        b = wid;
    }
    void area()
    {
        cout << "Area of triangleis : " << l * b * 0.5;
    }
};

int main()
{
    int a, b;
    cout << " Enter l and b of triangle ";
    cin >> a >> b;
    triangle tr(a, b);
    tr.area();
    return 0;
}