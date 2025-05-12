#include<iostream>
using namespace std;
int Binary_to_decimal(int n){
    int ans = 0;
    int mul = 1;
    int rem ;

    while(n){
        rem = n % 10;
        n =  n/10;
        ans = ans + rem * mul;
        mul = mul * 2 ;
    }
    return ans;

}
int main(){
    int num ;
    cout<<"Enter the Binary number:";
    cin>>num;
   cout<<"Decimal Number: "<<Binary_to_decimal(num);
    return 0;
}