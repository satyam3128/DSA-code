#include<iostream>
using namespace std;
int peak_index_in_mountain(int arr[] , int size){
    int start = 0 ;
    int end  = size-1;
    int mid ;
    while(start<=end){
        mid = end + (start-end)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1] ){
            return mid;

        }
        else if(arr[mid] > arr[mid-1]){
            start = mid+1;

        }
        else{
            end = mid-1;
        }
    }
    return -1;

}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the Size of Array:";
    cin>>n;
    for(int i = 0;i<n ;i++){
        cout<<"Enter the "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<" Array:"<<endl;
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<peak_index_in_mountain(arr,n);
    


    return 0;
}