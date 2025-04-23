#include<iostream>
using namespace std;

class BankAccount{
    public:
        string accountHolder = "Unknow";
        int accountNumber = 0;
        float balance  = 0;

        //Default Constructor
        BankAccount(){
            accountHolder = "Unknow";
            accountNumber = 0;
            balance = 0;
        }

        //Parameterized Constructor
        BankAccount(string accountHolder ,int accountNumber , float balance){
            this->accountHolder = accountHolder;
            this->accountNumber = accountNumber;
            this->balance = balance;
        }

        //Copy Constructor
        BankAccount(BankAccount &obj){
            this->accountHolder = obj.accountHolder;
            this->accountNumber = obj.accountNumber;
            this->balance = obj.balance;
        }

        void deposit(float amount){
            balance = amount;        
        }

        void withdraw(float amount){
            if(balance >= amount){
                balance = balance - amount;
                cout<<"Successfully you have withdrawl: "<<amount<<endl;
            }
            else{
                cout<<"Not enough balance to withdrawl"<<endl;
            }
        }

        void displayAccountDetails(){
            cout<<"Account Number is: "<<accountNumber<<endl;
            cout<<"Account Holder Name: "<<accountHolder<<endl;
            cout<<"Total Balance: "<<balance<<endl;
        }

};

int main(){
    BankAccount obj1; 
    obj1.displayAccountDetails();
    cout<<endl;

    BankAccount obj2("Jhone DOe" , 12345 , 800);

    obj2.deposit(1000);
    obj2.withdraw(500);
    obj2.displayAccountDetails();
    cout<<endl;

    BankAccount obj3(obj2);
    obj3.displayAccountDetails();
    cout<<endl;
    return 0;
}