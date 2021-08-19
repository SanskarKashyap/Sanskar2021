#include <iostream>
using namespace std ;

int main ()
{
    int sal , aloo, tax ;
    float net_sal ;
    cout<<"May I Know yr Salry Plz"<<endl  ;
    cin>>sal ;
    cout<<"Enter The AlloWEnce Persentage "<<endl ;
    cin>> aloo ;
    cout<<"Enter The tax Persentage "<<endl ;
    cin>>tax ;
    // net_sal = sal + (sal*aloo)/100 - (sal*tax)/100 ;
    net_sal = sal + (sal*(aloo-tax)/100) ;
    cout<<"Net Salary is "<<net_sal <<endl ;

    return 0 ;
}