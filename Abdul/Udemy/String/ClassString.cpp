#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter A String " << endl;
    string str;
    getline(cin, str);
    // getline(cin, str);

    cout << str;


    // cin>>str ;
    // cout<<str<<endl ;
    // cin>>str ;                     // it is highly recomanded . not to use "CIN" for takin up the string 
                                      // instead of that we should use "GETLINE" FUNTION for best result 
    // cout<<str<<endl ; 

    return 0;
}