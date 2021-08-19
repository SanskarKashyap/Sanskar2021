// 2. wap to define a function inline to calculate area of a cube.
#include <iostream>
using namespace std;

class Cube
{
private:
    int l;
    int b;
    int h;

public:
    Cube(int len = 0, int wid = 0, int hig = 0)
    {
        l = len;
        b = wid;
        h = hig;
    }
    int getlen()
    {
        return l;
    }
    int getwid()
    {
        return b;
    }
    int gethig()
    {
        return h;
    }
    void area(class Cube);
};
void Cube::area(class Cube cu)
{
    cout << " Total Surface Area " << 2 * ((cu.getlen() * cu.getwid()) + (cu.getlen() * cu.gethig()) + (cu.getwid() * cu.gethig()));
}

int main()
{
    int a, b, h;
    cout << " Enter l, b anh h of cube : ";
    cin >> a >> b >> h;
    Cube tr(a, b, h);
    tr.area(tr);
    return 0;
}