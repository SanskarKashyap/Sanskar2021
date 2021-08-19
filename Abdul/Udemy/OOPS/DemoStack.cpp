#include <iostream>
#include <math.h>

using namespace std;

class ractangle
{
public:
    float length;
    float breadth;

    float area()
    {
        return length * breadth;
    }
    float parimeter()
    {
        return 2 * (length + breadth);
    }
    float digonal()
    {
        return sqrt((length * length) + (breadth * breadth));
    }
};

int main()
{
    ractangle R1;
    cin >> R1.length >> R1.breadth;
    cout << R1.area() << endl;
    cout << R1.parimeter() << endl;
    cout << R1.digonal() << endl;
    return 0;
}