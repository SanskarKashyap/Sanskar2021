#include <iostream>
using namespace std;


int main()
{
    try
    {
        // throw 1;
        // throw 9.9;
        // throw 'a';
        throw "hi hi";
    }
    catch (int a)
    {
        cout << "INT Catch ";
    }
    catch (double b)
    {
        cout << "Float Catch ";
    }
    catch (char c)
    {
        cout << "Char catch ";
    }
    catch (...)     // Universal catch .. program is not intrested in knowing ,, where the exactly problem hapened ,, it should be done at last
    {
        cout << " Laura le MC ";
    }
    return 0;
}
