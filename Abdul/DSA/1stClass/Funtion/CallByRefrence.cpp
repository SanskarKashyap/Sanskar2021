#include <iostream>

using namespace std;


void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << x<< " "<< y ; 
}
int main()
{
    int a, b;
    printf("Enter two diffrent value ");
    cin >> a >> b;
    swap(a, b);
    cout << a<< " "<< b ; 

    return 0;
}

// call  by refrence is not funtioning in c
