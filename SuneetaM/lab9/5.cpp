#include <iostream>
using namespace std;

class Shape
{
private:
public:
    Shape();
    ~Shape();
};

Shape::Shape()
{
    cout << "\nShape is Created ";
}

Shape::~Shape()
{
    cout << "\nShape is Deleted ";
}
class circle : public Shape
{
private:
    int rad;

public:
    circle(int r);
    void Area();
    ~circle();
};

circle::circle(int r)
{
    rad = r;
}
void circle::Area()
{
    cout << "\nArea of the Circle is : " << (22 * rad * rad / 7) << "sq unit";
}
circle::~circle()
{
    cout << "\nCircle is distructed ";
}
class Triangle : public Shape
{
private:
    int len;
    int wid;

public:
    Triangle(int l, int b);
    void Area();
    ~Triangle();
};

Triangle::Triangle(int l, int b)
{
    len = l;
    wid = b;
}
void Triangle::Area()
{
    cout << "\nArea of the Triangle is : " << (len * wid / 2) << "sq unit";
}
Triangle::~Triangle()
{
    cout << "\nTriangle is distructed ";
}

class Rectangle : public Shape
{
private:
    int len;
    int wid;

public:
    Rectangle(int l, int b);
    void Area();
    ~Rectangle();
};

Rectangle::Rectangle(int l, int b)
{
    len = l;
    wid = b;
}
void Rectangle::Area()
{
    cout << "\nArea of the Rectangle is : " << (len * wid) << "sq unit";
}
Rectangle::~Rectangle()
{
    cout << "\nRectangle is distructed ";
}

int main()
{
    Rectangle rec(5, 6);
    circle cr(14);
    Triangle tr(9, 8);
    rec.Area();
    cr.Area();
    tr.Area();
    return 0;
}