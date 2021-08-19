#include<iostream>
using namespace std ; 

int main ()
{
    int sum = 0 ; 
    int X , Y ; 
    int A[2][2]={{4,1},{5,2}};
    int B[2][2] = {1,0,0,1} ;

    for (int i = 0; i < 2; i++)
    {
         for (int j = 0; j < 2; j++)
         {
             X= B[i][j]; 
              Y=A[++i][j] ;
              cout<<X*Y ;  
         }
        cout<<endl; 
         
    }
    


    return 0 ; 
}