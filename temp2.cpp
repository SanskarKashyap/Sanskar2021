#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, breadth;

public:
    void getVAL();
    friend float area();
};

void rectangle::getVAL()
{
    cout << "Enter length ";
    cin >> length;
    cout << "Enter breadth ";
    cin >> breadth;
}
float area()
{
    rectangle r;
    int temp;
    r.getVAL();
    temp = r.length * r.breadth;
    return temp;
}
int main()
{
    float result;
    result = area();
    cout << "Area is " << result << endl;
    return 0;
}