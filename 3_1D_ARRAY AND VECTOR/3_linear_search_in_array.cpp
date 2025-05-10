#include<iostream>
using namespace std;
int search(int arr[] , int size , int key){
    for(int i = 0;i<size ;i++){
        if(arr[i] == key){
            return i;
        }

    }
    return -1;
}
int main(){

    int n , key;
    cout<<"Enter the Size of Array:";
    cin>>n;
    int arr[1000];
    for(int i =0 ;i<n;i++){
        cout<<"Enter the the "<<i<<" element:";
        cin>>arr[i];
    }
    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter the Number that you Want to Search:";
    cin>>key;
    cout<<"Element at index :"<<search(arr , n ,key);
    

    return 0;
}