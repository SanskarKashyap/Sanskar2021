#include<iostream>
#include<string>

using namespace std ;

int main ()
{
    string s= "sanskar" ; 
    string::iterator it ; 
    int count = 0 ; 
    for(it= s.begin(); it != s.end() ; it++ )
    {
        count++ ;  
    }
    cout << count<<endl ; 



    return 0 ; 
}