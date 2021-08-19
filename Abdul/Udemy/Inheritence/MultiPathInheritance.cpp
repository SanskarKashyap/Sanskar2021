#include <iostream>
using namespace std;

class classA
{
public:
    int a;
};                           // [instead of using scope resolution we can use]
class classB : public classA //virtual public classA
{
public:
    int b;
};
class classC : public classA //virtual public classB
{
public:
    int c;
};
class classD : public classB, public classC
{
public:
    int d;
};

int main() // (http://www.tutorialdost.com/Cpp-Programming-Tutorial/50-CPP-Multipath-Inheritance-Ambiguity.aspx)
{
    classD obj;

    // obj.a = 10;  // //Statement 1, Error occur---->  {by using " virtual public class " we can use this obj.a to input value  }
    // obj.a = 100; // //Statement 2, Error occur----->  {ClassD have only one copy of ClassA therefore statement 4 will overwrite the value of a, given at statement 3.}

    obj.classB::a = 10;  //Statement 3
    obj.classC::a = 100; //Statement 4

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