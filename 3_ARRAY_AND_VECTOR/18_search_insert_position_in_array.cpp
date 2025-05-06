#include<iostream>
using namespace std;

void selection_sort(int arr[] , int size){
    for(int i = 0;i<size-1 ;i++){  
        int index = i;
        for(int j =i +1 ;j<size ;j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        swap(arr[i],arr[index]);

    }
}
int search_insert_index(int arr[] , int size , int target){
    int start = 0;
    int end = size-1;
    int mid , index = size;
    while(start<=end){
        mid = (end + start)/2;
        if(arr[mid] == target){
            index = mid;
            break;
        }
        else if(arr[mid] > target){
            index = mid  ;
            end = mid -1 ;
        }
        else{
            start = mid + 1;
        }
    }
    return index;

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
    cout<<endl<<"sorted Array:"<<endl;
    selection_sort(arr,n);
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    int target;
    cout<<"\nEnter the target Element:";
    cin>>target;
    cout<<endl<<"Index is : "<<search_insert_index(arr, n , target);
    
    


    return 0;
}