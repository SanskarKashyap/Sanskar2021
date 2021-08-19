#include <iostream>
using namespace std;

int main()

{
    int A[2][3] ; 
    for(auto &x:A)
    {
        for(auto &y:x)
        {
            cin>>y ;
        }
    }
    cout<<endl<<"Matrix"<<endl ;
    for(auto &x:A)
    {
        for(auto &y:x)
        {
            cout<<y<<"  " ;
        }
        cout<<endl ; 
    }
    cout<<endl ; 

    return 0;
}