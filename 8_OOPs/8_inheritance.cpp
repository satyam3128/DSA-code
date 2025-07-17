#include<iostream>
using namespace std;
// base class
class human{
    protected:
    string name;
    int age;
    

};
// derived class
class student : protected human{
    int roll;
    int fees;

    public:
    void set(string name,int age, int roll,int fees){
        this->name  = name;
        this->age = age;
        this->roll = roll;
        this->fees = fees;
    }
    void display(){
        cout<<name<<" "<<age<<" "<<roll<<" "<<fees<<endl;
    }

};
class teacher : public human{
    int salary;

};
int main(){
    student s1;
    s1.set("RDX",17,12,5654);
    s1.display();    
    
    
    

    return 0;
}