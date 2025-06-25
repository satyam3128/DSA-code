#include <iostream>
using namespace std;
int GCD(int a , int b){
    if(b==0) return a;
    // reccursive call of a and b when b == 0 then at that time value of a is HCF
    return GCD(b,a%b);
}
int main(){
    int a , b;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the Second number:";
    cin>>b;
    cout<<"HCF: "<<GCD(a,b);


    return 0;

}