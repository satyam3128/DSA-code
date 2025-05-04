#include<iostream>
using namespace std;
int main(){
    int num , ans = 0 , rem;
    cout<<"Enter the number:";
    cin>>num;
    while(num){
        rem = num %10;
        ans = ans * 10  + rem;
        num = num /10;
    }
    cout<<"REVERSED DIGIT NUMBER:"<<ans;

    return 0;
}