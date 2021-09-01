#include <iostream>
using namespace std;

class Integer
{
    int x;
    int y;

public:
    void input(int a, int b)
    {
        x = a;
        y = b;
    }
    friend class swapInteger;
};
class swapInteger
{
    int p ;
    public:
    void Swap(Integer &I)
    {
        int temp = I.x;
        I.
    }

};
