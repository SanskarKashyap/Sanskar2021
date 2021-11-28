#include <iostream>
using namespace std;
class Account
{
protected:
    int cust_no;
    string cust_name;
    int balance;

public:
    void input()
    {
        cout << "Enter customer's no,name,balance:" << endl;
        cin >> cust_no >> cust_name >> balance;
    }
};

class Savings : public Account
{
protected:
    int min_balance;

public:
    void depositl()
    {
        int deposit;
        cout << "Enter amount deposited in saving account:" << endl;
        cin >> deposit;
        balance = deposit;
    }
    void withdrawl()
    {
        cout << "Enter minimum balance:" << endl;
        cin >> min_balance;
        int withdraw;
        cout << "Enter amount to be withdrawn:" << endl;
        cin >> withdraw;
        if (balance - withdraw < min_balance)
        {
            cout << "***Amount can't be withdrawn***" << endl;
        }
        else
        {
            balance -= withdraw;
            cout << "***Amount withdrawn successfully•••" << endl;
            cout << "Remaining balance:" << balance << endl;
        }
    }
    void displayl()
    {
        cout << "Saving account details:" << endl
             << "Customer's account number:" << cust_no << endl
             << "Customer's name;" << cust_name << endl
             << "Balance left:" << balance << endl;
    }
};
class Current : public Account
{
protected:
    int overdue;

public:
    void deposit2()
    {
        int dep;
        cout << "Enter amount to be deposited:" << endl;
        cin >> dep;
        balance = +dep;
    }
    void withdrawZ()
    {
        cout << "Enter overdue amount:" << endl;
        cin >> overdue;
        int with;
        if (balance - with < overdue)
        {
            cout << "***Amount can't be withdrawn***" << endl;
        }
        else
        {
            balance = -with;
            cout << "***Amount withdrawn successfully***" << endl;
            cout << "Remaining balance:" << balance << endl;
        }
    }
    void displayZ()
    {

        cout << "Current account details:" << endl
             << "Customer's account number:" << cust_no << endl
             << "Customer's name;" << cust_name << endl
             << "Balance left:" << balance << endl;
    }
};
int main()
{
    Savings obj;
    Current ob;
    obj.input();
    obj.depositl();
    obj.withdrawl();
    ob.deposit2();
    ob.withdrawZ();
    obj.displayl();
    cout << "** ******* ********** ************* ********** *************** " << endl;
    ob.displayZ();
    return 0;
}
