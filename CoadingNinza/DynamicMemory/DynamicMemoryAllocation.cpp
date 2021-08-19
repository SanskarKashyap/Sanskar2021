#include <iostream>
using namespace std ; 

int main ()
{
    // new int ;        // new memory is allocated in heap but its address is lost so pointer must is used 
    int *ptr = new int ; 
    *ptr = 10 ;
    cout<< *ptr<<endl ; 
    
    return 0 ; 
}