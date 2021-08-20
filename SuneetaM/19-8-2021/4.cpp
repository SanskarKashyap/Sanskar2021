
// 4. wap to define a class to represent a bank acount include the following members <.i.> name of depositor <.ii.> acount number <.iii.>
// type of acount
//  	<.iv.> balance amount in the acount
// 	member function are:
// 		1. to assign initial values
// 		2. to sepodit an amount
// 		3. to withdraw an amount after checking the balance
// 		4. to diplay name and balance

#include <iostream>
using namespace std;
#include <conio.h>
#include <string.h>
class bank
{
    string name;
    long long AcntNo;
    string AcntType;
    double balance;

public:
    bank() {}

    bank(string na, int acno, string aty, float bal)
    {
        name = na;
        AcntNo = acno;
        AcntType = aty;
        balance = bal;
    }
    void setname(string na) { name = na; }
    void setacno(int acno) { AcntNo = acno; }
    void setaty(string aty) { AcntType = aty; }
    void setbal(float bal) { balance = bal; }
    float getbal() { return balance; }

    double deposit()
    {
        double amt;
        cout << "\nDeposit Amount to your Account : ";
        cin >> amt;
        balance = balance + amt;
        return balance;
    }
    void withdrw()
    {
        double amt;
        cout << "\nWithdraw Amount : ";
        cin >> amt;
        balance = balance - amt;
        if (balance > 0)
        {
            cout << balance;
        }
        else
            cout << "\nInsuffient Amount in your Account !! ";
    }
    void disp()
    {
        cout << "\nAccount number : " << AcntNo;
        cout << "\nName : " << name;
        cout << "\nAccount type : " << AcntType;
        cout << "\nAmount in your Account : " << balance;
    }
};
int main()
{
    string a, b;
    long long x;
    double y;

    cout << "\nEnter Account number : ";
    cin >> x;
    cout << "\nEnter Name : ";
    cin >> a;
    fflush(stdin);
    cout << "\nEnter account type : ";
    cin >> b;
    cout << "\nEnter balance amount : ";
    cin >> y;
    bank bk(a, x, b, y);
    int in;
    do
    {

        cout << "\n\n Menu \n"
             << "1. Deposit money\n"
             << "2. Withdraw money\n"
             << "3. Exit\n"
             << "4. Account Detail\n"
             << "\nEnter your Option : ";
        cin >> in;

        switch (in)
        {
        case 1:
            bk.deposit();
            cout << "\nBalance in yr account : " << bk.getbal();
            break;
        case 2:
            bk.withdrw();
            break;
        case 3:
            bk.disp();
            break;

        default:
            break;
        }
    } while (in < 4);
    return 0;
}