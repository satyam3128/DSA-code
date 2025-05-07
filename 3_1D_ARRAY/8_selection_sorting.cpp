#include<iostream>
using namespace std;
void swap(int *a , int *b){
    int temp = *a;
    *a = *b ; 
    *b = temp;
}
void selection_sort_Ascending(int arr[] , int size){
    for(int i = 0;i<size-1 ;i++){  // Number of rounds 
        int index = i;
        for(int j =i +1 ;j<size ;j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        swap(&arr[i],&arr[index]);

    }
}
void selection_sort_descending(int arr[] , int size){
    for(int i = 0;i<size-1 ;i++){
        int index = i;
        for(int j = i+1 ;j<size ;j++){
            if(arr[j]>arr[index]){
                index = j;
            }
        }
        swap(&arr[i] , &arr[index]);

    }
}
int main(){
    int n ;
    cout<<"Enter array Size :";
    cin>>n;
    int arr[100];
    for(int i = 0;i<n ;i++){
        cout<<"Enter the "<<i<< " element of Array:";
        cin>>arr[i];
    }
    cout<<endl<<"Unsorted Array:"<<endl;
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<" Ascending order Sorted Array:"<<endl;
    selection_sort_Ascending(arr,n);
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Descending Order Sorted Array:"<<endl;
    selection_sort_descending(arr,n);
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }

    


    return 0;
}