#include<iostream>
#include<math.h>
using namespace std ;

int main ()
{
    int  n,m , r, sum = 0 ; 
    cout<<" Enter a Number " ;
    cin >> n ;
    m=n ;

    while (n>0)
    {
        r=n%10 ;
        n=n/10 ;
        // cout<<r ;
        sum=sum+pow(r,3) ; 
    }
    
    // cout<<endl<<sum ;
    if (sum==m)
    {
        cout<<" Its a Armstrong Number " ; 
    }
    else
    {
        cout<< " Its not a Armstrong Number " ; 
    }

    return 0; 
}