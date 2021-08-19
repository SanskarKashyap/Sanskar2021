#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    void setLength(int l);
    void setBreadth(int b);
    int getLength() { return length; }
    int getBreadth() { return breadth; }
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
int main()
{
    Rectangle r1(5, 4);
    Rectangle r2(r1);
    Rectangle r3;
    cout << r1.area() << endl;
    cout << r1.perimeter() << endl;
    cout << r2.area() << endl;
    cout << r2.perimeter() << endl;
    cout << r3.area() << endl;
    cout << r3.perimeter() << endl;
}
Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}
Rectangle::Rectangle(int l, int b)
{
    setLength(l);
    setBreadth(b);
}
Rectangle::Rectangle(Rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
int Rectangle::area()
{
    return length * breadth;
}
int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}
void Rectangle::setLength(int l)
{
    if (length >= 0)
    {
        length = l;
    }
    else
    {
        length = 0;
    }
}

void Rectangle::setBreadth(int b)
{
    if (breadth >= 0)
    {
        breadth = b;
    }
    else
    {
        breadth = 0;
    }
}
bool Rectangle::isSquare()
{
    return length == breadth;
}
Rectangle::~Rectangle()
{
    cout << "rectangle destroyed" << endl;
}