#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int img;
};

int main()
{
    class complex c[10];
    cout << " Enter 10 complax number" << endl;
    int sum = 0, sum1 = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> c[i].real;
        cin >> c[i].img;
        sum = sum + c[i].real;
        sum1 = sum1 + c[i].img;
    }
    cout << sum << " + " << sum1 << " i" << endl;
    return 0;
}