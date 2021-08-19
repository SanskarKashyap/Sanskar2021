#include <iostream>
#include <math.h>
using namespace std;
class Coordinate
{
private:
    int x;
    int y;

public:
    void input(int a, int b)
    {
        x = a;
        y = b;
    }
    int getx() { return x; }
    int gety() { return y; }
    double Dis(class Coordinate k, class Coordinate m)
    {

        return sqrt(pow(k.getx() - m.getx(), 2) + pow(k.gety() - m.gety(), 2));
    }
};

int main()
{
    Coordinate co, co1, c3;
    co.input(3, 4);
    co1.input(0, 0);
    cout << c3.Dis(co, co1) << " unit";

    return 0;
}