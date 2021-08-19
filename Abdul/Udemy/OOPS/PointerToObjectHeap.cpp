#include <iostream>
using namespace std;

class rectangle
{
public:
    float length;
    float breadth;

    float area()
    {
        return length * breadth;
    }
};

int main()
{
    rectangle *ptr ;
    ptr = new rectangle ; 

    // rectangle *ptr = new rectangle ; // WE CAN USE EITHER LINE 18 - 19 OR LINE 21 :)
    
    ptr->length=10 ;
    ptr->breadth=5;
    cout<<ptr->area() ;

    return 0;
}