#include<iostream>
using namespace std;
class person{
    protected:
    string name;

    public:
    void introduce(){
        cout<<"Hello My Name is "<<name<<endl;
    }


};
class employee : public person{
    protected:
    int salary;
    public:
    void monthly_salary(){
        cout<<"My monthly Salary is: "<<salary<<endl;

    }
};

class manager:public employee{
    public:
    string depeartment;

    manager(string name , int salary ,string department  ){
        this->name = name;
        this->salary = salary;
        this->depeartment =department;
    }

    void work(){
        cout<<"I am leading the department "<<depeartment<<endl;
    }

};
int main(){

    manager m1("Satyam",1000,"CSE-IOT");
    m1.work();
    m1.introduce();



    

    return 0;
}