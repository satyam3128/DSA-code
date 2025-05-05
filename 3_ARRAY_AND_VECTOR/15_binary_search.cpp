#include<iostream>
using namespace std;
void sorting(int arr[] , int size){
    for(int i = 0;i<size-1 ;i++){
        int index = i;
        for(int j = i+1 ;j<size ;j++){
            if(arr[j] < arr[index]){
                index =j;
            }
        }
        swap(arr[i] , arr[index]);
    }
}
int Binary_search(int arr[] ,int size, int key){
    int start = 0 ;
    int end = size -1;
    int mid =  (end + start) / 2;
    while(start<=end){
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid] < key){
        start = mid +1;
    }
    else{
        end = mid -1;
    }
    }
    return -1;
    
}
int main(){
    int arr[1000];
    int n ;
    cout<<"Enter the Size of Array:";
    cin>>n;
    for(int i = 0;i< n ;i++){
        cout<<"Enter the "<<i<<" element of Array:";
        cin>>arr[i];
    }
    sorting(arr, n);
    cout<<endl<<"Sorted Array:";
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    int key;
    cout<<endl<<"Enter the Number that you want to search:";
    cin>>key;
    cout<<"Element at Index : " <<Binary_search(arr,n,key );


    return 0;



}