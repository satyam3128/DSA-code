#include <iostream>
using namespace std;
class customer{
    string name;
    int account_number;
    int balance;
    static int total_customer;

    public:

    customer(string name , int account_number , int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;

        total_customer++;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<" "<<total_customer;
    }
    static void display_total(){
        cout<<"Total customer:"<<total_customer;
    }

};
int customer :: total_customer = 0;


int main(){

    customer A1("Rohit",1,1000);
    customer A2("Rohit",1,1000);
    customer A3("Rohit",1,1000);
    customer A4("Rohit",1,1000);

    customer::display_total();
    
    


    return 0;
}