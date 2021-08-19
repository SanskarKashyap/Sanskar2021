#include <iostream>
using namespace std;

class car
{
public:
    virtual void Start() = 0;                   // [= 0;] is used to make a pure Polymorphoism ; 
    // {
    //     cout << " Car Started " << endl;
    // }
    virtual void Stop() = 0;                  // [= 0;] is used to make a pure Polymorphoism ; 
    // {
    //     cout << " Car Stoped " << endl;
    // }
};
class Inova : public car
{
public:
    void Start()
    {
        cout << " Inova Started " << endl;
    }
    void Stop()
    {
        cout << " Inova Stoped " << endl;
    }
};
class Swift : public car
{
public:
    void Start()
    {
        cout << " Swift Started " << endl;
    }
    void Stop()
    {
        cout << " Swift Stoped " << endl;
    }
};
class Bularo : public car
{
public:
    void Start()
    {
        cout << " Bularo Started " << endl;
    }
    void Stop()
    {
        cout << " Bularo Stoped " << endl;
    }
};
int main()
{
    // Swift SW;
    // car *p = &SW;
    car *p = new Swift();
    p->Start();
    p->Stop();

    p = new Inova();
    // Inova In;
    // car *k = &In;
    // k->Start();
    // k->Stop();
    p->Start();
    p->Stop();
    
    p = new Bularo();
    p->Stop();

    return 0;
}