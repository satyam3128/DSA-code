#include<iostream>
using namespace std;
class human{
    protected:
    string name;
    int age;

    public:
    void work(){
        cout<<" I am Working \n";
    }
};
class student: public human{
    int roll_number ,fees;

    public:
    student(string name , int age , int roll_number,int fees){
        this->name = name;
        this->age = age;
        this->roll_number = roll_number;
        this->fees = fees;
    }

};
int main(){

    student s1("Satyam",27,33,90);
    s1.work();

    return 0;
}