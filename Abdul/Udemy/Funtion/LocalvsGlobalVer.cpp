#include <iostream>
using namespace std;

int g = 20;

void fun()
{
    int a = 5;
    g = g + a;
    cout<<g<<endl ; 
}
int main()
{
    int x = 10 ;
    fun () ; 
    g++; 
    cout <<"Main " << g<< endl ; 

    return 0;
}