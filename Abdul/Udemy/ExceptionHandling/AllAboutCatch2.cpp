#include <iostream>
using namespace std;
class MyException : public exception
{
};
class MyException2 : public MyException
{
};

int main()
{
    try
    {
        // throw 1;
        // throw MyException();
        throw MyException2();
    }
    catch (int a)
    {
        cout << "INT Catch ";
    }
    catch (MyException2 e) // child class satch funtion shoud be used / called 1st
    {
        cout << " My  Expectation 2 ";
    }
    catch (MyException e)
    {
        cout << " My  Expectation ";
    }

    catch (...) // should be called at last , as always
    {
        cout << " Laura le MC ";
    }

    return 0;
}
