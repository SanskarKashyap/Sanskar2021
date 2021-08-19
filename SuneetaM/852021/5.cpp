#include <iostream>
using namespace std;
class Dist
{
private:
public:
    int feet;
    int inches;
    void display()
    {
        cout << feet << " feet " << inches << " inches " << endl;
    }
    class Dist add(class Dist k, class Dist m)
    {
        class Dist temp;
        temp.feet = k.feet + m.feet;
        temp.inches = k.inches + m.inches;
        return temp;
    }
    friend Dist operator+(Dist, Dist);
};
Dist operator+(Dist x, Dist y)
{
    Dist temp;
    temp.feet = x.feet + y.feet;
    temp.inches = x.inches + y.inches;
    return temp;
}

int main()
{
    class Dist c1, c2, c3;
    cout << " Enter 2 Distance in feet and inch " << endl;

    cin >> c1.feet;
    cin >> c1.inches;
    cin >> c2.feet;
    cin >> c2.inches;

    c3 = c1 + c2;
    c3 = c1 + c2;
    c3.display();
    

    return 0;
}