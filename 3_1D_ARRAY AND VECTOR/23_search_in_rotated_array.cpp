#include<iostream>
using namespace  std;
int search_in_rotated_Array(int arr[] , int n , int target){
    int start = 0;
    int end = n-1;
    int mid;
    while(start<= end){
        mid = start + (end-start)/2;
        if(arr[mid] == target){
            return mid;
        }
        // checking the left sorted or not
        else if(arr[0] >= arr[mid]){
            if(arr[start] <= target && arr[end]<=target ){
                start = mid +1;
            }
            else{
                end = mid -1;
            }

        }
        // right side sorted or not
        else{
            if(arr[0] < target && arr[mid]>=target){
                end = mid -1;
            }
            else{
                start = mid +1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[1000];
    int n;
    cout<<"Enter the Size of Array:";
    cin>>n;
    cout<<"\n Enter sorted Array:\n";
    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<"\nArray\n";
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    int target;
    cout<<"\nEnter the Target:";
    cin>>target;
    cout<<"\nMIN.ELEMENT INDEX AT "<<search_in_rotated_Array(arr, n ,target );


    return 0;
}