#include <iostream>
using namespace std ;

int main ()
{
    int input , discount , netAmount ;
    cout<<" Enter Max Price of the Product ";
    cin>>input ;
    
    if (input < 100)
    {
        cout<<" No Discount " ;
        netAmount = input ;
        cout<<netAmount;
    }
    else if (input>=100 && input<500)
    {
         netAmount = (float) (input - input*0.1) ;
          cout<<netAmount;
    }
    
     else if (input>=500)
    {
         netAmount = (float) (input - input*0.2) ;
          cout<<netAmount;
    }



    return 0 ;

}





