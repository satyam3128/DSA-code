#include<iostream>
using namespace std;
void odd_even_between_two_numbers(int a , int b){
   
    cout<<"EVEN NUMBER:";
    for(int i = a+1 ; i < b ;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    cout<<"\nODD NUMBER:";
    for(int j = a+1 ;j<b ;j++){
        if(j%2 != 0){
            cout<<j<<" ";
        }
    }
    
}
int main(){
    int a,b;
    cout<<"Enter the First Number:";
    cin>>a;
    cout<<"Enter the Last Number:";
    cin>>b;
    odd_even_between_two_numbers(a,b);

    return 0;
}