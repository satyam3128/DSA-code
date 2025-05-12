#include<iostream>
using namespace std;
int decimal_to_binary(int n){
    int ans = 0;
    int mul = 1;
    int rem ;

    while(n){
        rem = n % 2;
        n =  n/2;
        ans = ans + rem * mul;
        mul = mul * 10 ;
    }
    return ans;

}
int main(){
    int num ;
    cout<<"Enter the Decimal number :";
    cin>>num;
   cout<<"\nBINARY NUMBER:"<<decimal_to_binary(num);
    return 0;
}