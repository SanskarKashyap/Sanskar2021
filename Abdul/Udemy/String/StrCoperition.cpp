#include<iostream>
#include<cstring>

using namespace std; 
int main()
// // method 1 
// {
//     char A[]= "JaySriRam" ;
//     char B[]= "Dharm " ;
//     cout<<strcmp(B,A) <<endl ; 
//     return 0 ; 
// }

// // method 2 
{
    string s1 = "Hindu " ; 
    string s2 = "Rastra" ; 
    cout<<s2.compare(s1)<<endl ;
    return 0 ; 
}