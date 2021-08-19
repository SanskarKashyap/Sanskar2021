#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(int l = 0, int w = 0)
    {
        length = l;
        width = w;
    }
    void setWidth(int w)
    {
        width = w;
    }
    void setLength(int l)
    {
        length = l;
    }
    int getLength()
    {
        return length;
    }
    int getWidth()
    {
        return width;
    }
    int area()
    {
        return length*width ;
    }
};
class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid(int h)                //int l, int w,
    { 
        //  // length = l;                                 //  // length and wigth can't be acessed directly ;
        //  // width = w;
        //  // Rectangle(l, w);                            //  // length and wigth can't be acessed directly ;
        height = h;
                                // setLength(l);
                                // setWidth(w);
    }
    void setHeight(int h)
    {
        height = h;
    }
    int getHeigth()
    {
        return height;
    }
    void display()
    {
        cout << "Length = " << getLength() << " Width = " << getWidth() << " Height = " << getHeigth() << endl;
    }
    int volume()
    {
        cout << "volume" << endl;
        return getLength() * getWidth() * getHeigth();
    }
};
int main()
{
    // Cuboid c1(2, 3, 4);
    Cuboid c1(5) ;
    // c1.setHeight(10);
    c1.setLength(7);
    c1.setWidth(5);
    c1.display();
    cout << c1.volume()<<endl;
    cout << c1.area();


    return 0;
} 