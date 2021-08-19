#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
};

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    //in-line funtion
    swap(a, b);
    // in call by refrence value is pased but address is taken ;; it is same as ... funtion is is in the main stetment itself
    cout << a << " " << b<< endl;

    return 0;
}


// in call by   refrence we should avoid complex funtion like loop ,,,, instead of that 
// we should call by adress ....