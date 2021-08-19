#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int width;

protected:
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

public:
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
        return length * width;
    }
};
class Cuboid : public Rectangle
{
private:
    int height;

public:
    // Cuboid(int h)
    // {
    //     height = h;                // this mathod can't be use as length and width is in protected data n can't be access by main funtion 
                                      // it can be only access by inharited class i.e cuboid in this case 
    // }
    Cuboid(int l, int w, int h)
    {
        height = h;
        setLength(l);
        setWidth(w);
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
        cout << "volume  ";
        return getLength() * getWidth() * getHeigth();
    }
};

int main()
{
    Cuboid c1(5, 10, 7);

    // c1.setLength(7);
    // c1.setWidth(5);
    c1.display();
    cout << c1.volume() << endl;
    cout << "Area " << c1.area();
    return 0;
}
