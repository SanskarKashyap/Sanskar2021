#include <iostream>
using namespace std;
struct rectangle
{
    int len;
    int wid;
};
int area(struct rectangle k)

{
    return k.len * k.wid;
}

int main()
{
    rectangle r{11, 5};
    cout << area(r);

    // struct rectangle *p ;
    rectangle *p;
    p = new rectangle; 
    p->len = 10;
    p->wid = 5;
    cout << area(*p) << endl;

    return 0;
}