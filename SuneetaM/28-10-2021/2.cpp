#include <bits/stdc++.h>
using namespace std;

class Array
{
    int n;
    int *arr;

public:
    Array()
    {
        n = 0;
    }
    Array(int size_150)

    {
        n = size_150;
        arr = new int[n];
    }
    friend istream &operator>>(istream &in, Array a);
    friend ostream &operator<<(ostream &out, Array a);
};

istream &operator>>(istream &in, Array a)
{
    cout << "Enter elements of array :\n";
    for (int i = 0; i < a.n; i++)
    {
        in >> a.arr[i];
    }
    cout << endl;
    return in;
}

ostream &operator<<(ostream &out, Array a)
{

    cout << "Elements of array are :\n";
    for (int i = 0; i < a.n; i++)

    {
        out << a.arr[i] << " ";
    }
    cout << endl;
    return out;
}

int main()
{
    int n;
    cout << "Enter size of array" << endl;
    cin >> n;
    Array Ar(n);
    cin >> Ar;
    cout << Ar;

    return 0;
}
