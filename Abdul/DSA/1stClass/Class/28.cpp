#include <iostream>
using namespace std;

class rec
{
private:
    int length;
    int width;

public:
    rec()
    {
        length, width = 0;
    }
    rec(int l, int b);
    int area();
    int parimeter();
};
rec::rec(int l, int b)
{
    length = l;
    width = b;
}
int rec::area()
{
    return length * width;
}
int rec::parimeter()
{
    return 2 * (length + width);
}
int main()
{
    rec r{6, 7};
    cout << r.area() << endl;
    cout << r.parimeter();

    return 0;
}