//  An exception is an unexpected problem that arises during the exception of the program terminates suddenly with some errors/issues.Execption occurs during the running of the program

// The try keyword represent a block of code that may thow an exception placed inside the try block.It's followed by one or more catch blocks.If an exception occurs , try block thwrow that exception.

// The catch statement represents a block of code that is executed when a particular exception is thrown from the try block. the code to handle the exception is written inside the catch block.

// An exception in C++ can be thrown using the throw keybord.when a program encounter a throw the statement, then it immeditely terminates the current function and starts finding a matching catch block to handle the throw exception.


#include<iostream>
using namespace std;

class customer{
    string name;
    int balance,account_number;

    public:
    customer(string name , int balance , int account_number){
        this->name = name;
        this->balance = balance;
        this->account_number = account_number;
    }

    // depsoite
    void deposite(int amount ){
        if(amount>0){
            balance += amount;
            cout<<amount<<" RS is creadited Sucessfully\n";
        }
        else{
            throw "Amount Should be Grater than 0";
        }

    }
    // withdraw
    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance -= amount;
            cout<<amount<<" RS is debited  Sucessfully\n";
        }
        else if(amount<0){
            throw "Amount should be greater than 0\n";
        }
        else{
            throw "Your Balance is Low\n";
        }
    }


};
int main(){

    customer c1("Rohit" , 5000,101);
    try{
    c1.deposite(100);
    c1.withdraw(6000); // not have sufficent amount 
    c1.deposite(100);
    }catch(const char *e){
        cout<<"Exception Occured:"<<e<<endl;
    }


    return 0;
}