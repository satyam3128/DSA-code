#include<iostream>
using namespace std;
int decimal_to_octal(int num){
    int ans = 0;
    int mul = 1;
    int rem;
    while(num){
        rem = num % 8;
        num = num / 8;
        ans = ans  + rem * mul ;
        mul = mul * 10 ;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the decimal number:";
    cin>>n;
    cout<<"Octal number :"<<decimal_to_octal(n);

    return 0;
}