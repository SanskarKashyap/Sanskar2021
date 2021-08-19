#include <iostream>
using namespace std ;

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"aR = "<<x<<" bR = "<<y<<endl;
};
int main()
{
    int a, b;
    cout<<"Enter two diffrent value ";
    cin>>a>>b ;
    swap(a, b);

    //in swap by value actual parameter will not be changed ,, it will be only affective in formal parameter

    cout<<"a = "<<a<<" b = "<<b;

    // printf("a = %d    b = %d", a, b );    { NO USE }

    return 0;
}