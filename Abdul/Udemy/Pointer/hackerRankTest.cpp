#include <iostream>
using namespace std;

int main()
{
    int a, b, size;
    cin >> a >> b;

    int *ptr[a];     // iska mtb a ka hr ek member pointer hai 

    for (int i = 0; i < a; i++)
    {
        cin >> size;
        ptr[i] = new int[size];
        for (int j = 0; j < size; j++)
        {
            cin >> ptr[i][j];
        }
        // cout << "Loop " << i << " is competed" << endl;
    }
    int f1, f2;
    for (int k = 0; k < b; k++)
    {
        cin >> f1 >> f2;
        cout << ptr[f1][f2] << endl;
    }

    return 0;
}