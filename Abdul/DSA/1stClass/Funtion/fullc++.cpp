#include <iostream>
using namespace std;

class ractangle
{
private:
    int length;
    int breadth;

public:
    // ractangle() { length = breadth = 5; }
    ractangle(int l, int b);
    int area();
    int parameter() { return 2 * (length + breadth); }
    int getL() { return length; }
    int setL(int l) { length = l; }

    ~ractangle();
};

ractangle::ractangle(int l, int b)
{
    length = l;
    breadth = b;
}

int ractangle::area()   
{
    return length * breadth;
}
ractangle::~ractangle()
{
}
int main()
{
    ractangle r(10, 5);
    cout << "area  " << r.area() << endl;
    cout << "parameter  " << r.parameter() << endl;
    cout << "Length of rectangle " << r.getL() << endl;
    r.setL(25);
    cout << "Length of rectangle after change " << r.getL() << endl;
}
