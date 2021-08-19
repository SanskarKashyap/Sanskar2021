#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    // const int a = 10;
    // int const a = 10;
    a++; // read-only variable 'a' if const is used then
    cout << a;
    return 0;
}