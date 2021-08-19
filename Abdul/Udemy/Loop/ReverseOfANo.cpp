#include<iostream>
using namespace std ;

int main ()
{
    int n,m , r , rev=0 ;
    cout<<"Enter A No." ;
    cin >> n ; 
    m=n;
    while (n>0)
    {
        r=n%10 ;
        n=n/10 ;
        rev= (rev*10)+r ; 
    }
    cout<<rev ; 
    if (rev==m)
    {
        cout<<" its a palimdrome ";
    }
    else
     cout<<" its a non palimdrome number ";
    return 0 ;
}