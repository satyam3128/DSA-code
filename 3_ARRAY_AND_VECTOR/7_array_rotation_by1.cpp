#include<iostream>
using namespace std;
void rotate_one(int arr[] , int size){
    int temp = arr[size-1];
    int i = size-1;
    while(i != 0){
        arr[i] = arr[i-1];
        i--;
    }
    arr[0] = temp;
}
int main(){

    int n;
    cout<<"Enter the Size of Array:";
    cin>>n;
    int arr[1000];
    for(int i =0 ;i<n;i++){
        cout<<"Enter the the "<<i<<" element:";
        cin>>arr[i];
    }
    cout<<endl<<"Array Before Rotation:"<<endl;
    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Array After Rotation one "<<endl;
    rotate_one(arr, n);

    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}