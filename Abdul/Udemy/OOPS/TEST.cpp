#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(){};
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    void setLen(int l);
    void setWid(int b);
    int getLen();
    int getWid();
    int area();
    int perimeter();
    int isSquare();
    ~Rectangle();
};
Rectangle::Rectangle(int l, int b)
{
    length = l;
    width = b;
}
Rectangle ::Rectangle(Rectangle &r)
{
    length = r.length;
    width = r.width;
}
void Rectangle ::setLen(int l)
{
    length = l;
}
void Rectangle ::setWid(int b)
{
    width = b;
}
int Rectangle ::getLen()
{
    return length;
}
int Rectangle ::getWid()
{
    return width;
}
int Rectangle ::area()
{
    return length * width;
}
int Rectangle ::perimeter()
{
    return 2 * (length + width);
}
int Rectangle ::isSquare()
{
    return (length == width) ? 1 : 0;
}
Rectangle::~Rectangle()
{
    cout << "\nRec Object is Deleted\n";
}

int main()
{
    class Rectangle r;
    class Rectangle r1(8, 9);
    r.setLen(5);
    r.setWid(10);
    cout << r1.area() << endl;
    cout << r.perimeter() << endl;
    Rectangle r3(r);
    cout << r3.isSquare();

    return 0;
}
