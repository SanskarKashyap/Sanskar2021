#include <iostream>
using namespace std;
template <class T>
class rec
{
private:
    T len;
    T wid;

public:
    rec() { len, wid = 0; }
    rec(T l, T b)
    {
        len = l;
        wid = b;
    }
    T area();
};
template <class T>
T rec<T>::area()
{
    return len * wid;
}

int main()
{
    rec<int> r{5, 6};
    rec<float> r1{5.6, 6};
    cout << r1.area();

    return 0;
}