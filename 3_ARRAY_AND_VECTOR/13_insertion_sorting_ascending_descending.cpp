#include<iostream>
using namespace std;
void insertion_sort_ascending(int arr[] , int size){
    for(int i = 1 ;i<size ;i++){
        for(int j = i ;j>0 ;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j] , arr[j-1]);
            }
            else{
                break;
            }
        }
    }
}
void insertion_sort_descending(int arr[] , int size){
    for(int i = 1 ;i<size ;i++){
        for(int j = i ;j>0 ;j--){
            if(arr[j]>arr[j-1]){
                swap(arr[j] , arr[j-1]);
            }
            else{
                break;
            }
        }
    }
}

int main(){
    int arr[1000];
    int n ;
    cout<<"Enter the Size of Array:";
    cin>>n;
    for(int i = 0;i<n ;i++){
        cout<<"Enter the "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<endl<<"Unsorted Array:"<<endl;
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nSorted Array Ascending order:\n";
    insertion_sort_ascending(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nSorted Array Descendng Oeder:\n";
    insertion_sort_descending(arr,n);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}