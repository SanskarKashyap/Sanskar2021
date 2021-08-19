#include<iostream>
using namespace std ;

int main ()
{
    int max=0 ;
    int A[]= {4,5,6,9,8,3,7,6} ; 
    for(auto x:A)
    {
        if (x>max)
        {
            max=x ;
        }

    }
    cout<<max ;

    return 0 ; 
}
