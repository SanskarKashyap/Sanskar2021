#include <bits/stdc++.h>
#include <iostream>

using namespace std;
//Implement the class Box
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box
{
private:
    int length;
    int width;
    int height;

public:
    Box(int l = 0, int b = 0, int h = 0)
    {
        SetLength(l);
        Setwidth(b);
        SetHeight(h);
    }
    Box(Box &b1)
    {
        length = b1.length;
        width = b1.width;
        height = b1.height;
    }
    void SetLength(int l)
    {
        if (l > 0)
            length = l;
        else
            length = 0;
    }
    void Setwidth(int b)
    {
        if (b > 0)
            width = b;
        else
            width = 0;
    }
    void SetHeight(int h)
    {
        if (h > 0)
            height = h;
        else
            height = 0;
    }
    long long getLength() { return length; }
    long long getBreadth() { return width; }
    long long getHeight() { return height; }
    long long CalculateVolume() { return getLength()*getBreadth()*getHeight(); }                //33004122803

    friend bool operator<(Box &A, Box &B);
    friend ostream &operator<<(ostream &, Box c);
};

bool operator<(Box &A, Box &B)
{
    if ((A.getLength() < B.getLength()) || ((A.getBreadth() < B.getBreadth()) && (A.getLength() == B.getLength())) || ((A.getHeight() < B.getHeight()) && (A.getLength() == B.getLength()) && (A.getBreadth() == B.getBreadth())))
    {
        return true;
    }
    else
    {
        return false;
    }
}
ostream &operator<<(ostream &out, Box c)

{
    cout << c.getLength() << " " << c.getBreadth() << " " << c.getHeight();
    return out;
}

void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}

int main()
{
    check2();
}