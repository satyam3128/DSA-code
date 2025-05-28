#include <iostream>
using namespace std;
int main(){
    string s1;
    cout<<"ENter the name:";
    getline(cin,s1);
    string s2;
    cout<<"Enter the name:";
    getline(cin,s2);

    string s3 = s1 + s2;
    cout<<s3;

    string s4,s5,s6;
    cout<<"\nEnter the name:";
    getline(cin,s4);
    cout<<"Enter the name:";
    getline(cin,s5);
    s6 = s5.append(s6);
    cout<<s6;


    return 0;
}