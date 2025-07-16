#include <iostream>
using namespace std;
class customer{
    
    string name;
    int account_number;
    int balance;
    public:
    
    public:
    // Default constructor
    customer(){
        name = "Rohit";
        account_number = 4;
        balance = 111;
    }
    // pramaterised constructor
    customer(string a, int b ,  int c){
        name = a ;
        account_number = b;
        balance = c;

    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
    
};
int main(){

    customer a1;
    customer a2("satyam",12,100);

    a1.display();
    a2.display();

    
    
    



    return 0;
}