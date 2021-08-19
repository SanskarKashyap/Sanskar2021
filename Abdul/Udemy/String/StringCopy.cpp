#include<iostream>
#include<string>

using namespace std ;
int main ()
{
    string s="Student";
    char str[10];
    s.copy(str,s.length()); 
    cout<<str;
    

    return 0 ; 
}