#include <iostream>
using namespace std;

class MyException : public exception 
{

};

// int Devide(int a, int b)
// int Devide(int a, int b) throw(int )  //  this is optional to define throw in header ,, usefull in biger class 
int Devide(int a, int b) throw(MyException )
{
    if (b == 0)
        // throw 1;
        // throw 1.5;
        // throw 'a';
        // throw "SAN";
        throw MyException ()  ;

    return a / b;
}

int main()
{
    int a = 10, b = 1, c;
    try
    {
        c = Devide(a, b);

        cout << c << endl;
    }
    // catch (int e)
    // catch (double e )
    // catch (char e)
    // catch (string e)
    catch (MyException e)
    {
        cout << " Devisor is 0 " << endl;
    }
    cout << "Bye " << endl;

    return 0;
}