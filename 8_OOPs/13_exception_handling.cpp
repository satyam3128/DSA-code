#include <iostream>
using namespace std;

class customer {
    string name;
    int balance;
    int account_number;

public:
    customer(string name, int balance, int account_number) {
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout <<amount <<" Rs is debeted sucessfully"<<endl;
        } else {
            throw "amount should be greater than 0";
        }
    }

    void withdraw(int amount) {
        if(amount>0 && amount<=balance){
            balance -= amount;
            cout<<amount<<" Rs is debited Successfully";
        }
        else if(amount > 0 && amount<= balance){
            balance -= amount;
            cout<<amount<<" Rs is debited sucessully ";
        }
        else if(amount<0){
            throw "amount should be greater than 0";
        }
        else {
            throw "Your balance is low";
        }

    }
};

int main(){

    customer c1("Rohit",400,10);

    try{
        c1.deposit(100);
        c1.withdraw(5000);
        c1.deposit(199);
    }catch(const char *e){
        cout<<"Exception occured:"<<e<<endl;  
    }


    return 0;
}