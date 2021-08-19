#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int widht;

public:
    void SetLength(float l)
    {
        if (l > 0)
            length = l;
        else
            length = 0;
    }
    void SetWidht(float b)
    {
        if (b > 0)
            widht = b;
        else
            widht = 0;
    }
    int GetLength()
    {
        return length;
    }
    int GetWidht()
    {
        return widht;
    }
    float area()
    {
        return (GetLength()*GetWidht());
    }
};

int main()
{
    Rectangle r, r1 ;
   r1.SetLength (5);
   r1.SetWidht(2);
   cout<<r1.area() ;


    return 0;
}