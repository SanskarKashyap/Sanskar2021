#include<iostream>
using namespace std;
class complex
{
    int imaginary,real;
    public:
    void get()
    {
        cout<<"Enter real and imaginary part:";
        cin>>real>>imaginary;
    }
    void show()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    complex operator+(complex d)
    {
        complex x;
        x.real=real+d.real;
        x.imaginary=imaginary+d.imaginary;
        return x;        
    }
    complex operator++()
    {
        complex cx ; 
        cx.real=real++;
        cx.imaginary= imaginary++;
        return cx ; 
    }
};
int main()
{
    complex a,b,c,d;
    a.get();
    a.show();
    b.get();
    b.show();
    c=a+b;
    c.show();
    d=++a;
    a.show();
    d.show();
}