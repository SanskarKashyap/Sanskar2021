#include <iostream>
using namespace std;
class Complax
{
private:
    int real;
    int img;

public:
    Complax (int r=0 , int i=0)
    {
        real = r ;
        img =i ; 
    }
    void display()
    {
         cout<<real<<" + "<<img<<"i"<<endl ; 
    }
    friend Complax operator+(Complax, Complax);

};

Complax operator+(Complax x , Complax y )
{
    Complax temp ; 
    temp.real = x.real+y.real;
    temp.img=x.img+x.img;
    return temp;
}

int main()
{
    int a , b ; 
    cin>>a>>b;
    Complax c1(3,6),c2(a,b),c3 ;
     
  
    c3=c1+c2 ; 
    c3.display();
 
    
   
    return 0;
}