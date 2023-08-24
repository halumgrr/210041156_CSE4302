#include<iostream>
using namespace std;

class bankAccount
{
    private :
        string name;
        string accountNumber;
        string accounttype;
        int Balance;
    public :
        bankAccount() : Balance(0){}
        void customerDetails(string cname, string cnumber)
        {
            if(cname == "\0" && cnumber == "\0")
            {
                cout << "Error: Invalid Name or Account Number" << endl;
            }
            else
            {
                name = cname;
                accountNumber = cnumber;
            }
        }

        void accountType(string ctype)
        {
            if(ctype == "\0")
            {
                cout << "Invalid Account Type" << endl;
            }
            else
            {
                accounttype = ctype;
            }
        }

        void balance()
        {
            cout << Balance << endl;
        }

        void deposit(int amount)
        {
            if(amount <= 0)
            {
                cout << "Error : Invalid Deposit Amount" << endl;
            }
            else
            {
                Balance+= amount;
                cout << Balance << endl;
            }
        }

        void withdraw(int amount)
        {
            if(amount <= 0 || amount > Balance)
            {
                cout << "Error : Invalid Amount to Withdraw" << endl;
            }
            else
            {
                Balance-=amount;
            }
        }

        void display()
        {
            cout << "NAME : " << name << endl;
            cout << "ACCOUNT NUMBER : " << accountNumber << endl;
            cout << "ACCOUNT TYPE : " << accounttype << endl;
            cout << "BALANCE : " << Balance << endl;
        }
};

int main()
{
    bankAccount customer;
    customer.customerDetails("Halum", "156");
    customer.accountType("Savings");
    customer.display();
    customer.balance();
    customer.deposit(500);
    customer.withdraw(200);
    customer.balance();
    customer.display();

}