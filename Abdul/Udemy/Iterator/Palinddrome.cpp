#include<iostream>
#include<string>
using namespace std ; 

int main ()
{
    string str = "NITIN";
    string rev = ""; 
    string:: reverse_iterator it ; 

    for(it=str.rbegin(); it!=str.rend();it++)
    {
        rev=rev + *it ;

    }
    cout<<rev<< endl ; 
    if (str.compare(rev)==0)
    cout<<str<<" is a palindrome"<<endl  ;

    return 0 ; 
}