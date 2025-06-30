#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;
    for(int i = 1 ;i<=10 ;i++){
        cout<<num<<" * "<<i<<" = "<<num*i;
        cout<<endl; 
    }

    return 0;
}