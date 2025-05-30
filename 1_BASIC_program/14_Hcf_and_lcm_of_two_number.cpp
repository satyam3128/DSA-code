#include<iostream>
using namespace std;
int hcf(int a , int b){
    if (a == 0) return b;
    if (b == 0) return a;
    int minimum = min(a,b);
    int HCF ;
    for(int i = 1 ;i<=minimum ;i++){
        if(a % i == 0 && b % i == 0){
            HCF = i;
        }
    }
    return HCF;
}
int lcm(int a , int b){
    return (a*b)/hcf(a,b);
}
int main(){
    int a ;
    cout<<"Enter first number:";
    cin>>a;
    int b ;
    cout<<"\nEnter second number:";
    cin>>b;
    cout<<"\nHCF is:";
    cout<<hcf(a,b);
    cout<<"\nLCM is:";
    cout<<lcm(a,b);

    return 0;
}