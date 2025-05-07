#include <iostream>
using namespace std;
void selection_sort(int arr[] , int size){
    for(int i = 0 ; i<size-1 ;i++){
        int index = i;
        for(int j = i+1 ;j<size ;j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
}
void bubble_sort(int arr[] , int size){
    for(int i = size-1 ;i>=1 ;i--){
        bool swapping = 0;
        for(int j = 0 ;j<i ;j++ ){
            if(arr[j] > arr[j+1]){
            swap(arr[j] , arr[j+1]);
            swapping = 1;}
        }
        if(swapping == 0){
            break;
        }
    }
}
void inserion_sort(int arr[] , int size){
    for(int i = 1 ;i<size ;i++){
        for(int j = i ;j>0 ;j--){
            if(arr[j] <arr[j-1]){
                swap(arr[j] , arr[j-1]);
            }
            else{
                break;
            }
            
        }
    }
}
int main(){
    int arr[100];
    int n ;
    cout<<"Enter the size:";
    cin>>n;
    for(int i = 0;i< n ;i++){
        cout<<"Enter element";
        cin>>arr[i];
        
    }
    cout<<"\nUnsorted Array:\n";
    for(int i= 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    selection_sort(arr,n);
    bubble_sort(arr,n);
    inserion_sort(arr,n);
    cout<<"\nSorted Array\n";
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}