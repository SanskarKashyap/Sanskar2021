//WAP to demonstrate the order of call of constructor and destructor in case of multilevel inheritance
#include<iostream>
using namespace std;
class A
{
    public:
 A()
 {
     cout<<" Constructor of A is called "<<endl;
 }
 ~A()
 {
     cout<<" Destructor of A is called "<<endl;
 }
};
class B:public A
{
    public:
   B()
   {
       cout<<" Constructor of B is called "<<endl;
   }
   ~B()
   {
       cout<<" Distructor of B is called "<<endl;
   }
};
class C:public B
{
    public:
  C()
  {
      cout<<" Constructor of C is called "<<endl;
  }
  ~C()
  {
      cout<<" Distructor of C is called "<<endl;
  }
};
int main()
{
    C c;
    
}