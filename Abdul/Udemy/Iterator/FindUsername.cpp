#include <iostream>
#include <string>

using namespace std;
int main()
{
    string email ;
    cin>>email ; 
    int j = (int) email.find('@') ; 
    cout<<j << endl ; 
    
    // for(int i = 0 ; i< j ; i++)
    // {
    //     cout<<email[i] ; 
    // }

    cout<<email.substr(0,j); 
    


    return 0;
}