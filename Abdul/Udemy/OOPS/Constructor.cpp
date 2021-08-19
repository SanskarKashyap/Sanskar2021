#include <iostream>
using namespace std;

class rectangle
{
private:
    int Length;
    int Width;

public:
    rectangle(int l = 0, int b = 0)
    {
        SetLength(l);                   //
        SetWidht(b);                       
    }
    rectangle(rectangle &r1)
    {
        Length= r1.Length ;
        Width= r1.Width ; 

    }
    void SetLength(float l)
    {
        if (l > 0)
            Length = l;
        else
            Length = 0;
    }
    void SetWidht(float b)
    {
        if (b > 0)
            Width = b;
        else
            Width = 0;
    }
    int GetLength()
    {
        return Length;
    }
    int GetWidht()
    {
        return Width;
    }
    float area()
    {
        return (GetLength() * GetWidht());
    }
};

int main()
{
    rectangle r1(5, 10);                    //parmerised constructer 
    rectangle r2(r1);                    //copy  constructer 
    cout << r1.area() << endl;
    cout << r2.area() << endl;
    

    return 0;
}