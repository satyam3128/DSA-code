#include<iostream>
#include<math.h>
using namespace std;
int aramstrong_check(int n ){
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
int main(){
    int num;
    cout<<"Enter the Number:";
    cin>>num;
    cout<<endl<<" Is "<<num<<" a Aramstrong Number: "<<aramstrong_check(num);

    return 0;
}