#include <iostream>
using namespace std;

class PARCEL_847
{
    int weight_847;

protected:
    int shippingcost_847;

public:
    PARCEL_847(int w_847)
    {
        weight_847 = w_847;
        shippingcost_847 = 0;
    }

    void cal_shipping_847()
    {
        shippingcost_847 = 10 * weight_847;
    }
};

class Box_847 : public PARCEL_847
{
    int no_of_boxes_847;

public:
    Box_847(int weight_847) : PARCEL_847(weight_847)
    {
        if (weight_847 > 50)
            no_of_boxes_847 = 5;
        else if (weight_847 > 30)
            no_of_boxes_847 = 2;
        else
            no_of_boxes_847 = 1;
    }

    void cal_shipping_847()
    {
        PARCEL_847::cal_shipping_847();
        if (no_of_boxes_847 > 3)
            shippingcost_847 += 30;
    }

    void display_847()
    {
        cout << no_of_boxes_847 << " Boxes" << endl;
        cout << "Rs " << shippingcost_847 << " shipping cost" << endl;
    }
};

int main()
{
    int x_847;
    cout << "Enter Weight of parcel : ";
    cin >> x_847;
    Box_847 b_847(x_847);
    b_847.cal_shipping_847();
    b_847.display_847();
    return 0;
}