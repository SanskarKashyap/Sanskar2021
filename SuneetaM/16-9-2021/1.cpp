#include <iostream>
using namespace std;

class classA
{
public:
    int a;
};
class classB : public classA
{
public:
    int b;
};
class classC : public classA
{
public:
    int c;
};
class classD : public classB, public classC
{
public:
    int d;
};

int main()
{
    classD obj;

    // obj.a = 10;  //
    // obj.a = 100; //

    obj.classB::a = 10;
    obj.classC::a = 100;

    obj.b = 20;
    obj.c = 30;
    obj.d = 40;

    cout << "\n A from ClassB  : " << obj.classB::a;
    cout << "\n A from ClassC  : " << obj.classC::a;

    cout << "\n B : " << obj.b;
    cout << "\n C : " << obj.c;
    cout << "\n D : " << obj.d;

    return 0;
}