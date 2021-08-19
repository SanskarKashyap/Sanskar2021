#include <iostream>
using namespace std ;
int main ()
{
    string name ;
    cout << " Enter Your Name ";
    
    // cin >> name ;     
    getline(cin , name );

    cout << " Hello Mr/Mrs "<< name ;
    return 0 ;
}