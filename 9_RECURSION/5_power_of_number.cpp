#include <iostream>
using namespace std;
int power(int a,int b){
    if(b == 0) return 1;
    return a*power(a,b-1);
}
int main(){
    int n1,n2;
    cout<<"Enter the base:";
    cin>>n1;
    cout<<"Enter the power:";
    cin>>n2;
    cout<<n1<<" to power "<<n2<<" is: "<<power(n1,n2);

    return 0;
}