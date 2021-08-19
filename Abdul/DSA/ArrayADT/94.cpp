#include <iostream>
using namespace std;
struct Array
{
    int *A;
    int size;
    int length;
};

int main()
{
    struct Array ar;
    cout << "Enter the size of array " << endl;
    cin>>ar.length;
    ar.A= new int [ar.length];

    cout<<"Enter the no of ellement  ";
    


    return 0;
}