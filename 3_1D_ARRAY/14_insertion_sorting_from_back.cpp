#include<iostream>
using namespace std;
void insertion_sort_back_ascendning(int arr[] , int size){
    for(int i = size-2 ;i>=0 ;i--){
        for(int j = i ;j<size-1 ;j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
            else{
                break;
            }
        }

    }
}
void insertion_sort_back_descending(int arr[] , int size){
    for(int i = size-2 ;i>=0 ;i--){
        for(int j = i ;j<size-1 ;j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j] , arr[j+1]);
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
    cout<<"\nAscending Order sorting:\n";
    insertion_sort_back_ascendning(arr,n);
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nDescending Order sorting:\n";
    insertion_sort_back_descending(arr,n);
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}