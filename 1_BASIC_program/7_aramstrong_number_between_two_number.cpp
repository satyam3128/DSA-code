#include<iostream>
#include<math.h>
using namespace std;
int armstrong_check(int n ){
    int orig1 = n;
    int orig2 = n;
    int count = 0;
    int rem  , ans = 0;
    while(orig1){
        orig1 /=10;
        count++;
    }
    while(orig2){
        rem = orig2 % 10;
        orig2 /= 10;
        ans = ans + pow(rem,count);
    }
    if(ans == n){
        return 1;
    }
    return 0;

}
void armstrong_number_between_two(int a , int b){
    for(int i = a+1 ; i<b ;i++){
        if(armstrong_check(i)){
            cout<<i<<" ";
        }
        

    }
}
int main(){
    int a , b ;
    cout<<"Enter first Number:";
    cin>>a;
    cout<<"Enter first Number:";
    cin>>b;
    cout<<"\nArmstrong numbers between "<<a<<" and "<<b<<":-\n";
    armstrong_number_between_two(a,b);

    return 0;
}