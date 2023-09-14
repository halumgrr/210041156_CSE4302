#include <iostream>
using namespace std;

class bankAccount
{
private:
    string name;
    string accountNumber;
    string accounttype;
    int Balance;
    int MinBalance;

public:
    bankAccount()
    {
        cout << "Enter name" << endl;
        cin >> name;
        cout << "Enter account number" << endl;
        cin >> accountNumber;
        cout << "Enter type" << endl;
        cin >> accounttype;
        cout << "Enter Minimum Balanace" << endl;
        cin >> MinBalance;
        Balance = MinBalance;
    }

    bankAccount(int min, string naam, string no, string tYpe)
    {
        MinBalance = min;
        Balance = MinBalance;
        accountNumber = no;
        name = naam;
        accounttype = tYpe;
    }

    void balance()
    {
        cout << Balance << endl;
    }

    void deposit(int amount)
    {
        if (amount <= 0)
        {
            cout << "Error : Invalid Deposit Amount" << endl;
        }
        else
        {
            Balance += amount;
        }
    }

    void withdrawal(int amount)
    {
        if (amount <= 0 || amount > Balance || (Balance - amount < MinBalance))
        {
            cout << "Error : Invalid Amount to Withdraw" << endl;
        }
        else
        {
            Balance -= amount;
        }
    }

    void display()
    {
        cout << "NAME : " << name << endl;
        cout << "ACCOUNT NUMBER : " << accountNumber << endl;
        cout << "ACCOUNT TYPE : " << accounttype << endl;
        cout << "BALANCE : " << Balance << endl;
        cout << "MINIMUM BALANCE : " << MinBalance << endl;
    }

    void giveInterest(double interestRate = 0.03)
    {
        double interest = Balance * interestRate;
        double tax = interest * 0.1;
        Balance += (interest - tax);
    }

    ~bankAccount()
    {
        cout << "Account of " << name << " with account no. " << accountNumber << " is destroyed with a balance of " << Balance << endl;
    }
};

int main()
{
    bankAccount customer(500, "Halum", "210041156", "Savings");
    customer.display();
    customer.balance();
    customer.deposit(500);
    customer.balance();
    customer.withdrawal(200);
    customer.balance();
    customer.giveInterest(0.06);
    customer.balance();
}