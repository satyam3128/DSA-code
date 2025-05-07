#include<iostream>
using namespace std;
void swap(int *a , int *b){
    
   int temp = *a;
   *a = *b ;
   *b = temp;
}
void Bubble_sorting_incresing(int arr[] , int size){
    for(int i = size-2;i>=0 ;i--){
        bool swapping = 0 ;
        for(int j = 0 ;j<=i ;j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j] , &arr[j+1]);
                swapping = 1;
            }
        }
        if(swapping == 0){
            break;
        }
    }
}
void Bubble_sorting_decreaing(int arr[] ,  int size){
    for(int i = size-2 ;i>=0 ;i--){
        bool swapping = 0 ;
        for(int j = 0;j<=i ;j++){
            if(arr[j] < arr[j+1]){
                swap(&arr[j] , &arr[j+1]);
                swapping = 1;
            }
        }
        if(swapping == 0){
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
    Bubble_sorting_incresing(arr, n);
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Decreasing Order Sorted Array:"<<endl;
    Bubble_sorting_decreaing(arr, n);
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}