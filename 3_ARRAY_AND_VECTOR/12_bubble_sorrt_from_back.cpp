#include<iostream>
using namespace std;
void Bubble_sort_increasing(int arr[] , int size){
    for(int i = 0;i<size-1 ;i++){
        bool swapping = 0;
        for(int j = size-1 ;j>i ;j--){
            if(arr[j] <arr[j-1]){
                swap(arr[j] , arr[j-1]);
                swapping =1;
            }
        }
        if(swapping == 0){
            break;
        }
    }
}
void Bubble_sort_decreasing(int arr[] , int size){
    for(int i = 0 ;i<size-1 ;i++){
        bool swapping = 0;
        for(int j = size-1 ;j>i ;j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j] ,arr[j-1]);
                swapping =1;
            }

        }
        if(swapping ==0 ){
            break;
        }
    }
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
    cout<<"Unsorted Array:"<<endl;
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Increaing Order Sorted Array:"<<endl;
    Bubble_sort_increasing(arr, n);
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"decreasing Order Sorted Array:"<<endl;
    Bubble_sort_decreasing(arr, n);
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }

}