#include<iostream>
using namespace std ;

int main()
{
    int a;
    cout<<"enter a number\n";
    cin>>a;

    int sum=0;
    for (int counter = 1; counter <= a; counter++)
    {
        sum= sum + counter ;
        cout<<"sum is "<<sum <<endl; 
    }
    
    

    return 0;
}
