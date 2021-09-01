#include <iostream>
#include <cmath>
using namespace std;

#define PI (3.141592653589793)

double vol(float r)
{
    double vol;
    cout << "Radius : ";
    cin >> r;
    vol = 4 / 3.0 * PI * r * r * r;
    return vol;
}
double vol(float r, float h)
{
    double vol;
    cout << "Radius : ";
    cin >> r;
    cout << "Height : ";
    cin >> h;

    vol = PI * r * r * h;
    return vol;
}
double vol(float l, float b, float h)
{
    double vol;
    cout << "Length : ";
    cin >> l;
    cout << "Breadth : ";
    cin >> b;
    cout << "Height : ";
    cin >> h;
    vol = l * b * h;
    return vol;
}
int main()
{
    float a, b, c;
    cout << "volume of sphere" << endl
         << vol(a) << endl;
    cout << "volume of cylinder " << endl
         << vol(a, b) << endl;
    cout << "volume of cuboid " << endl
         << vol(a, b, c) << endl;

    return 0;
}