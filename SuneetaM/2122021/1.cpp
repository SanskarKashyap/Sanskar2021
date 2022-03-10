#include <iostream>
using namespace std;
class parcel
{
private:
    int weight;

protected:
    int shipping_cost;

public:
    parcel(float w) { weight = w; }
    parcel()
    {
        cout << "Enter weight: ";
        cin >> weight;
    }
    virtual void Cal_shopping()
    {
        shipping_cost = weight * 10;
    }
    int getWeight()
    {
        return weight;
    }
};

class Box : public parcel
{
private:
    int no_of_boxes;

public:
    int NoOfBox()
    {
        if (getWeight() <= 30)
        {
            no_of_boxes = 1;
            return no_of_boxes;
        }
        else if (getWeight() > 30 && (getWeight() <= 50))
        {
            no_of_boxes = 2;
            return no_of_boxes;
        }
        else
        {
            no_of_boxes = 5;
            return no_of_boxes;
        }
    }
    Box() {}

    void Cal_shopping()
    {
        shipping_cost = getWeight() * 10;
        if (NoOfBox() > 3)
            shipping_cost += 30;
    }
    void display()
    {
        cout << "No. of box Required :  " << NoOfBox() << endl;
        if (NoOfBox() > 3)
        {
            cout << "volume of the box exceeds 3 units : +30 Rs " << endl;
            cout << "Final shipping cost: " << shipping_cost << endl;
        }
        else
            cout << "Final shipping cost: " << shipping_cost << endl;
    }
};

int main()
{
    Box a;
    a.Cal_shopping();
    a.display();
    return 0;
}