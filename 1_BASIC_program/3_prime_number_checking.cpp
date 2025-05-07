#include<iostream>
using namespace std;
bool prime(int n){
    bool flag = true;
    if(n<2){
        return 0;
    }
    for(int i = 2 ;i<n-2 ;i++){
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
    cout<<n<<" is prime:"<<prime(n);

    return 0;
}