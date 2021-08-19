#include <iostream>
using namespace std;

int main()
{
    int i = 112;
    int &j = i;

    cout << &i << endl;
    cout << &j << endl;
    cout << j;

    return 0;
}