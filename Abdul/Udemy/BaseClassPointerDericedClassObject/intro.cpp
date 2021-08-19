#include <iostream>
using namespace std;
class base
{
public:
    void func1();
    void func2();
    void func3();
};
class derived : public base
{
public:
    void func4();
    void func5();
};
int main()
{
    base *p;
    p = new derived();
    p->func1() ;
    p->func2() ;
    p->func3() ;
    // p->func4() ;         //Statement 1, Error occur----> {as pointer is of base class , base dont thave the advace features }
    // p->func5() ;        //Statement 1, Error occur---->  {so even if advance features are avilable in dericed class user cant use it }
   


    return 0;
}