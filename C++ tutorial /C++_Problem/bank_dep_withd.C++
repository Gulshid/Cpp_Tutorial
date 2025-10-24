#include<iostream>
using namespace std;

                                      // Bank Deposite and Withdrawal program
class BankAccount
{
    private :
    string AccountHolder;
    int account_no;
    double balance;

    public:

    // Constructor for set the parameter
    BankAccount(string name, int acc_no, double initial_balance)
    {
        AccountHolder = name;
        account_no = acc_no;
        balance = initial_balance;
    }

    // function deposit 
    void Deposit(double amount)
    {
        if( amount > 0)
        {
            balance += amount;
            cout<<"Successfully Deposited Amount Rs :"<<amount<<"/-"<<endl;
        }

        else
        {
            cout<<"Insufficent Amount or Invalid Amount Rs:"<<amount<<"/-"<<endl;
        }
    }


    // funcition for withdrwal
    void Withdrawal(double amount)
    {
        if( amount <= balance  && amount > 0)
        {
            balance -= amount;
            cout<<"Successfully Withdrwal Amount Rs:"<<amount<<"/-"<<endl;
        }

        else
        {
            cout<<"Insufficent Amount or Invalid Amount Rs :"<<amount<<"/-"<<endl;
        }

    }


    // function for bannk Account details information display
    void display()
    {
        cout<<"Account Holder Name :"<<AccountHolder<<endl;
        cout<<"Account Number  :"<<account_no<<endl;
        cout<<"Account Current  Balance  Rs:"<<balance<<"/-"<<endl;
    }


    // function Current balance
    void Current_Balance()
    {
        cout<<"Account Current  Balance  Rs:"<<balance<<"/-"<<endl;
    }


};


int main()
{

    string name;
    int acc_no;
    double bal;
    cout<<" *** Bank Account Information ***"<<endl;
    // input from user for account details
    cout<<"Enter Account Holder Name :";
    getline(cin, name);


    cout<<"Enter Your Account Number :";
    cin>>acc_no;

    cout<<"Enter YOur Balance :";
    cin>>bal;


    BankAccount bank(name, acc_no, bal);

    // display the bank account details
    bank.display();


    
    double deposit_amount, withdrwal_amount;
    //input from user for deposite and withdrawal amount
    cout<<"Enter Your Deposit Amount :";
    cin>>deposit_amount;

    bank.Deposit(deposit_amount);

    bank.Current_Balance();

    cout<<"Enter Your Withdrwal Amount :";
    cin>>withdrwal_amount;

    bank.Withdrawal(withdrwal_amount);
    // display the bank account current balance 
    bank.Current_Balance();



}