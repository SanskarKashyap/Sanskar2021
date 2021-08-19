#include <iostream>
#include <cmath>
using namespace std;
class shape
{
public:
    virtual float Area() = 0;
    virtual float Parameter() = 0;
};
class Rectangle : public shape
{
private:
    float length;
    float breadth;

public:
    Rectangle(int l = 1, int b = 1)
    {
        length = l;
        breadth = b;
    }

    float Area()
    {
        return length * breadth;
    }
    float Parameter()
    {
        return 2 * (length + breadth);
    }
};
class Circle : public shape
{
private:
    int r;

public:
    Circle(int radius) { r = radius; }
    float Area()
    {
        return 3.14 * pow(r, 2);
    }
    float Parameter()
    {
        return 2 * (3.14 * r);
    }
};
int main()
{
    shape *s = new Rectangle(10, 5);
    cout <<"Area of rec "<< s->Area()<<endl ;
    cout <<"para of rec "<<s->Parameter()<<endl;
    s= new Circle(7) ; 
    cout <<"Area of cir "<< s->Area()<<endl;
    cout <<"para of cir "<<s->Parameter()<<endl;
    return 0;
}
