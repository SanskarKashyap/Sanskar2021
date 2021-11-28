#include <iostream>
using namespace std;
template <typename T>
T reversDigits(T num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main()
{
    int num;
    cout << "Enter the no. :";
    cin >> num;
    cout << "Reverse of no. is " << reversDigits(num);

    return 0;
}