#include <iostream>
using namespace std;
struct rectangle
{
    int len;
    int breadth;
};
int area(struct rectangle k  )
{
    return k.breadth * k.len;
}

int main()
{
    struct rectangle r; // initialize
    r.breadth = 15;
    r.len = 10;
    struct rectangle r1 = {10, 5}; // initialize + declare
    cout << area(r1);
    return 0;
}