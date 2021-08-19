#include<cmath>
using namespace std ;


float root(int a,int b,int c)
{
    float root1;
    
    root1=(float)(-b+sqrt(pow(b,2)-4*a*c))/(2*a) ;
    
    return root1;
}