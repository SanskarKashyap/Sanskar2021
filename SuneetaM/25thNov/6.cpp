#include <iostream>
using namespace std;
template <class T>
void maximum(T a[], int n)
{
    T max = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    cout << "MAX IS " << max << endl;
}
int main()
{
    int n;
    cout << "Enter size:";
    cin >> n;
    int a[n];
    float b[n];
    cout << "Enter int array:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    maximum(a, n);
    cout << "Enter float array:";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    maximum(b, n);
    return 0;
}