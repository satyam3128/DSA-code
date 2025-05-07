#include<iostream>
using namespace std;
bool prime(int n){
    bool flag = true;
    if(n<2){
        return 0;
    }
    for(int i = 2 ;i<n ;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    return flag;
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"\n1 : prime number\n";
    cout<<"0 : Not prime number\n";
    cout<<n<<" is prime:"<<prime(n);

    return 0;
}