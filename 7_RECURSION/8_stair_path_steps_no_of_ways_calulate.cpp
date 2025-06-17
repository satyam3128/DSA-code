// conditions:-
// 1. ONE , TWO ,THREE steps jump at a time :
// 2.Count all the Possible way to reach At Final Step.

#include<iostream>
using namespace std;
int combination(int stair){
    if(stair == 1) return 1;
    if(stair == 2) return 2;
    if(stair == 3) return 4;
    return combination(stair-1) + combination(stair-2) + combination(stair-3);
}
int main(){
    int num;
    cout<<"Enter the number of Steps:";
    cin>>num;
    cout<<"No OF Possible Combination:"<<combination(num);
    return 0;
}