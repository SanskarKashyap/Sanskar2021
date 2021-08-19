#include<iostream>
#include<string.h>

using namespace std ;
int main ()
{
    string str= "Hindutwa";
    cout<<str.find('w')<<endl ;
    cout<<str.at(6)<<endl;
    str[6]= 'v';
    cout<<str<<endl ;
    cout<<str.front()<<endl ;
    cout<<str.back()<<endl ;

    string str1= " Ideology" ;
    string str3 = str + str1 ;
    // we can use + or = opperator for append and assigning the strinng 
    cout<<str3 << endl ; 


    return 0 ; 
}