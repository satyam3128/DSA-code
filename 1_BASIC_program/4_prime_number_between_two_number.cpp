#include <iostream>
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
void prime_number_between_two_number(int a , int b){
    for(int i = a+1 ; i<b ;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
        else{
            
        }
    }
}
int main(){
    
    int a , b ;
    cout<<"Enter the First number:";
    cin>>a;
    cout<<"Enter the second Number:";
    cin>>b;
    cout<<endl<<"Prime Numbers between "<<a <<" and "<<b <<" are:-\n";
    prime_number_between_two_number(a,b);


    return 0;
}