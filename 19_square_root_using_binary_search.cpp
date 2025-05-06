#include<iostream>
using namespace std;
int square_root_using_binary_search(int num){
    int start = 0;
    int end = num;
    int mid ,  root = -1;
    if(num < 0){
        cout<<" Root of Negative number can not be calculate";
        return 0;
    }
    while(start<=end){
    mid = start + (end - start)/2;
        if(mid  == num/mid){
            root = mid;
            break;
        }
        else if(mid  >num / mid){
            end = mid -1;
        }
        else{
            root  = mid;
            start = mid + 1; 
        }
    }
    return root;
}
int main(){

    int n;
    cout<<"Enter the Number:";
    cin>>n;
    cout<<"\nSqaure Root is: "<<square_root_using_binary_search(n);


    return 0;
}