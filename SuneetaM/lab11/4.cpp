#include <iostream>
using namespace std;
class shape
{
public:
    virtual float area() = 0;
};
class Circle : public shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }
    float area()
    {
        return 3.1425 * radius * radius;
    }
};
class Square : public shape
{
private:
    float length;

public:
    Square(int l = 1)
    {
        length = l;
    }
    float area()
    {
        return length * length;
    }
};
int main()
{
    int a, b;
    cout << "Enter value of length for square " << endl;
    cin >> a;
    shape *s = new Square(a);
    cout << "Area of Square " << s->area() << endl;
    cout << "Enter value of radius for circle " << endl;
    cin >> b;
    s = new Circle(b);
    cout << "Area of Circle " << s->area() << endl;
}