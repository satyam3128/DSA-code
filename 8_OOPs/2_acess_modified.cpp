#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int age;
    int roll;
    string grade;

    public:
    // Function getter  or setter
    void setname(string n){
        if(n.size()==0){
            cout<<"Invalid Age"<<endl;
            return;
        }
    name =n;
    }
    void setage(int num){
        if(num<=0){
            cout<<"Invalid age";
            return;
        }
        age = num;
    }
    void setroll(int r){
        roll = r;
    }
    void setgrade(string g){
        grade = g;
    }

    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    void getgrade(int pin){
        if(pin == 123){
            cout<<grade<<endl;
        }
        else{
            cout<<"Give the correct pin";
        }
    }
    void getroll(){
        cout<<roll<<endl;
    }
    

    
    
};

int main(){
    student s1;
    s1.setname("SATYAM");
    s1.setage(33);
    s1.setgrade("A");
    s1.setroll(3);

    s1.getname();
    s1.getroll();
    s1.getage();
    s1.getgrade(12);
    


    return 0;
}