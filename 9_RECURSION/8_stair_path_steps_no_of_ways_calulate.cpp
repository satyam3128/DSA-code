// condition: at a time, jump is either one step or two steps only

#include<iostream>
using namespace std;
int combination(int stair){
    if(stair == 2) return 2;
    if(stair == 1) return 1;
    

    return combination(stair-1) + combination(stair-2);
}
int main(){
    int num;
    cout<<"Enter the number of Steps:";
    cin>>num;
    cout<<"No OF Possible Combination:"<<combination(num);

    return 0;
}