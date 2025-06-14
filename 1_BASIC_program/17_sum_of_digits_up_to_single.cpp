#include<iostream>
using namespace std;
int sum_digit(int n){
    if(n<=9){
        return n;
    }
    int ans = n; 
    while(ans>9){
        n = ans;
        ans = 0;
        while(n){
        int rem = n % 10;
        ans = ans + rem;
        n = n/10;
    }
    }
    return ans;
    
    
}
int main(){
    int n ;
    cout<<"Enter the number:";
    cin>>n;
    cout<<sum_digit(n);
    return 0;
}