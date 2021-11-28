#include <iostream>
using namespace std;
template <class T1, class T2>
class Test
{
    T1 a;
    T2 b;

public:
    Test(T1 x, T2 y)
    {
        a = x;
        b = y;
    }
    void sum()
    {
        cout << a + b << endl;
    }
};
int main()
{
    Test<int, int> a(1, 4);
    Test<float, float> b(2.4, 4.5);
    Test<int, float> c(2, 3.5);
    a.sum();
    b.sum();
    c.sum();
    return 0;
}