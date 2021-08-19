#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int Width;

public:
    Rectangle(int l, int b);
    void SetLength(int l);
    void SetWidth(int b);
    int GetLength();
    int GetWidth();
    int Area();
    int Perimeter();
    int isSqure();
    ~Rectangle();
};
int main()
{
    Rectangle R1(5, 10);
    int l, b;
    cin >> l >> b;
    Rectangle R2(l, b);
    cout << "Area " << R1.Area() << endl;
    cout << "Area " << R2.Area() << endl;
    return 0;
}

Rectangle::Rectangle(int l, int b)
{
    SetLength(l);
    SetWidth(b);
}
void Rectangle ::SetLength(int l)
{
    if (l >= 0)
    {
        length = l;
    }
    else
    {
        length = 0;
    }
}
void Rectangle ::SetWidth(int b)
{
    if (b >= 0)
    {
        Width = b;
    }
    else
    {
        Width = 0;
    }
}
int Rectangle ::GetLength()
{
    return length;
}
int Rectangle ::GetWidth()
{
    return Width;
}
int Rectangle ::Area()
{
    return length * Width;
}
Rectangle::~Rectangle()
{
    cout << "rectangle destroyed" << endl;
}