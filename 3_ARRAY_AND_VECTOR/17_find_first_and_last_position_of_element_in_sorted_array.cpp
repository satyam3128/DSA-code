#include<iostream>
using namespace std;
void selection_sort(int arr[] , int size){
    for(int i = 0 ;i<size-1 ;i++){
        int index = i;
        for(int j = i+1 ;j<size ;j++){
            if(arr[j] < arr[index]){
                index =j;
            }
        }
        swap(arr[i] , arr[index]);
    }
} 


void biarysearch_first_second(int arr[], int size , int target){
    int first = -1;
    int second = -1;
    int start = 0;
    int end = size-1;
    int mid;
    // first index
    while(start<=end){
         mid = (start + end)/2;
        if(arr[mid] == target ){
            first = mid;
            end = mid - 1;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }
        else{
            end = mid- 1;
        }
    }
    start = 0;
    end = size-1;
    
    // Second index
    while(start<=end){
        mid = (start +end)/2;
        if(arr[mid] == target ){
            second = mid;
            start = mid + 1;
        }
        else if(arr[mid] < target){
            start = mid+1;
        }
        else{
            end = mid- 1;
        }
    }
    int array[2] = {first ,  second};
    cout<< array[0]<<" " ;
    cout<< array[1] <<" ";
     


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
    selection_sort(arr, n);
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }

    int target1 ;
    cout<<"\nEnter the Element that You want to search:";
    cin>>target1;
    cout<<"\nIndex is the:\n";
    biarysearch_first_second(arr,n,target1);
    


    return 0;
}