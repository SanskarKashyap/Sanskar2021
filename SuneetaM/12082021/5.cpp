// wap to overload area function to calculate area of a triangle, area of rectangle
// area of circle, area of cylinder
#include <iostream>
#include <cmath>
using namespace std;

class area
{
public:
    int x;
    void display()
    {
        cout << " Display of area : ";
    }
};

class triangle : public area
{
private:
    int b, h;

public:
    triangle(int x, int y)
    {
        b = x;
        h = y;
    }
    void Show()
    {
        cout << "of Triangle  " << (float)(b * h) / 2 << endl;
    }
};
class rectangle : public area
{
private:
    int l, b;

public:
    rectangle(int x, int y)
    {
        l = x;
        b = y;
    }
    void Show()
    {
        cout << "of Rectangle  " << (float)(l * b) << endl;
    }
};
class circle : public area
{
private:
    int r;

public:
    circle(int y)
    {
        r = y;
    }
    void Show()
    {
        cout << "of circle  " << (float)3.14 * pow(r, 2) << endl;
    }
};
class cylinder : public area
{
private:
    int r, h;

public:
    cylinder(int x, int y)
    {
        r = x;
        h = y;
    }
    void Show()
    {
        cout << "of cylinder  " << (float)(2 * 3.14 * pow(r, 2) + (2 * 3.14 * r * h)) << endl;
    }
};

int main()
{
    triangle d(5, 4);
    d.display();
    d.Show();
    rectangle r(5, 4);
    r.display();
    r.Show();
    circle c(21);
    c.display();
    c.Show();
    cylinder cy(5, 7);
    cy.display();
    cy.Show();

    return 0;
}