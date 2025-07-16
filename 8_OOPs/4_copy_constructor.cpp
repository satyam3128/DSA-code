#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number;
    int balance;

    public:
    // Copy Constructor
    customer(customer &b){
        name = b.name;
        account_number = b.account_number;
        balance = b.balance;
    }
    // parametrised constructor

    customer(string name , int account_number , int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;   
    }



};
int main(){
    customer A1("SATYAM",100,1000);
    customer A2(A1);
    A1.display();
    A2.display();


    return 0;
}