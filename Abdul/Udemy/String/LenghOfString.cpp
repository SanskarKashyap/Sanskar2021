#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    // char A[100]="Hello " ;
    // cout<<strlen(A) ;

    char *s;
    cout << "Enter a String ";
    cin >> s;
    cout <<"Length "<< strlen(s) << endl;
    // strlen( ) is not working on pointer in my computer 
    return 0;
}