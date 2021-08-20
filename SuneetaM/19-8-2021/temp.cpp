
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
    char name[20];
    int ano;
    char atype[20];
    float bal;

public:
    void get(int no, char *n, char *t, float b)
    {
        strcpy(name, n);
        ano = no;
        strcpy(atype, t);
        bal = b;
    }
    float deposit()
    {
        float amt;
        cout << "\nDeposit Amount to your Account : ";
        cin >> amt;
        bal = bal + amt;
        return bal;
    }
    void withdrw()
    {
        float amt;
        cout << "\nWithdraw Amount:";
        cin >> amt;
        bal = bal - amt;
        if (bal > 0)
        {
            cout << bal;
        }
        else
            cout << "\nInsuffient Amount in your Account";
    }
    void disp()
    {
        cout << "\n\nAccount number: " << ano;
        cout << "\n\nName: " << name;
        cout << "\n\nAccount type: " << atype;
        // cout << "\n\nDeposit Amount to your Account : " << deposit();
        // cout << "\n\nAfter Withdraw Amount balnace: ";
        // withdrw();
    }
};
int main()
{
    int n;
    char nm[20], t[20];
    float a;
    bank bk;

    cout << "\nEnter Account no.: ";
    cin >> n;
    cout << "\nEnter Name: ";
    cin >> nm;
    cout << "\nEnter account type: ";
    cin >> t;
    cout << "\nEnter balance amount: ";
    cin >> a;
    bk.get(n, nm, t, a);
    cout << "\n Menu \n"
         << "1. Deposit money\n "
         << "2. Withdraw money\n";

    int it;
    switch (it)
    {
    case 1:
        bk.deposit();
        break;
    case 2:
        bk.withdrw();
        break;

    default:
        break;
    }
}