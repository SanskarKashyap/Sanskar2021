#include <stdio.h>
#include <iostream>
using namespace std;

int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main()
{
    int a, b;
    cout << "Enter two Diffrent No ";
    cin >> a >> b;
    // int a= 10 , b=5 ;
    swap(&a, &b);
    cout << "a = " << a << " b = " << b;

    return 0;
}

// formal parameter can change the actual parameter when call by adderess is used