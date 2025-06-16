#include <iostream>
using namespace std;
int power(int x ,  int n){

    if(n == 0) return 1;
    if(n == 1) return x;
    int ans = power(x,n/2);
    if(n % 2 != 0) return ans * ans* x;
    return ans * ans;
}
int main(){
    int base , exp;
    cout<<"Enter the Base:";
    cin>>base;
    cout<<"Enter Exponent:";
    cin>>exp;
    cout<<power(base,exp);

    return 0;
}