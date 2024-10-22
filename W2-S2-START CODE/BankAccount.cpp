#include <iostream>
#include <string>
using namespace std;

class BankAccount {
 // TODO
    private:
        string AccountNumber;
        string AccountHolder;
        float Balance;
    public:
        BankAccount (string AccoutNumber, string AccountHolder, float Balance)
        {
            this -> AccountNumber = AccoutNumber;
            this -> AccountHolder = AccountHolder;
            this -> Balance = Balance;
        }
        void deposit(float Amount)
        {
            if ( Amount <= 0)
            {
                cout << " you can not deposit negative number." << endl;
            }
            else
            {
                this -> Balance = Balance + Amount;
            }
        }
        bool withdraw (float Amount)
        {
            if (Balance - Amount < 0)
            {
                cout << "can not withdraw balance is low." << endl;
                return false;
            }
            else
            {
                this -> Balance = Balance - Amount;
                return true;
            }
        }
        string toString()
        {
            return "Account Number :" + AccountNumber + ", Account Holder : " + AccountHolder + ", Balance :" + to_string(Balance);
        }
};

int main() {

    // Create an account with 0$
    BankAccount myAccount("ABC", "ronan", 0);
    cout<< myAccount.toString() << endl;

    // Deposite 100$
    myAccount.deposit(100);
    cout<< myAccount.toString() << endl;

    // Withdraw 80$ - Should success
    myAccount.withdraw(80);
    cout<< myAccount.toString() << endl;

    // Withdraw 30$ - Should fail
    myAccount.withdraw(30);
    cout<< myAccount.toString() << endl;

    return 0;
}