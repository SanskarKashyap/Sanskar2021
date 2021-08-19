#include <iostream>

using namespace std;
double s = 1;
double e(int x, int n)
{
    if (n == 0)
    {
        return s;
    }
    s = (1 + (x * s / n));

    cout << s << endl;
    return e(x, n - 1);
}
int main()
{
    int x, n;
    cin >> x >> n;
    cout << e(x, n);
    return 0;
}