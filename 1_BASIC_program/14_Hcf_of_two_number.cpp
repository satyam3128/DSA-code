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
int main(){
    int a ;
    cout<<"Enter first number:";
    cin>>a;
    int b ;
    cout<<"\nEnter first number:";
    cin>>b;
    cout<<"\nHCF is:";
    cout<<hcf(a,b);

    return 0;
}