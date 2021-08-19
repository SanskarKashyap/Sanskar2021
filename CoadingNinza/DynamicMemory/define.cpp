#include <iostream>
using namespace std;

#define MULTIPLY(a, b) a *b

int main()
{
    cout << MULTIPLY(2 + 3, 3 + 5); // MULTIPLY(2+3, 3+5) will be replaced by 2+3*3+5. And according to operator precedence, multiply operator (*) has higher precedence than plus operator (+). 
    cout <<endl <<  9 + 7;
    return 0;
}