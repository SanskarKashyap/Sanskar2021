#include <iostream>
using namespace std ;

class rectangle 
{
    public:

    void area ()
    {
        cout << " Area of a rectangle "<<endl ;
    }
};
class cuboid : public rectangle
{
    public:
    void volume ()
    {
        cout << " Volume of cuboid ";
    }

};
int main ()
{
    cuboid c; 
    rectangle *p = &c ;                     // i m pointing on a cuboid and saying its a rectangle ,, thoug it is a cuboid 
    p->area();                                            // c.area();
    // p->volume();                                            // c.volume();
}