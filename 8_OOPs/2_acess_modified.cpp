#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int age;
    int roll;
    string grade;

    public:
    // Function getter setter
    void setname(string n){
    name =n;
    }
    void setage(int num){
        age = num;
    }
    void setroll(int r){
        roll = r;
    }
    void setgrade(string g){
        grade = g;
    }

    void display(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<roll<<endl;
        cout<<grade<<endl;
    }

    
    
};

int main(){
    student s1;
    s1.setname("SATYAM");
    s1.setage(33);
    s1.setgrade("A");
    s1.setroll(3);
    s1.display();


    return 0;
}