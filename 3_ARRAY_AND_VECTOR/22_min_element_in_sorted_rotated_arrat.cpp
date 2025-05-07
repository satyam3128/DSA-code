#include<iostream>
using namespace std;
// Array must be sorted :

int min_element_in_rotated_array(int arr[] , int n ){
    int start = 0;
    int end = n-1;
    int mid , ans = arr[0];
    while(start<=end){
        mid = start + (end- start)/2;
        if(arr[0] <= arr[mid]){
            // arr[mid] == arr[0]
            start = mid +1 ;
        }
        else if(arr[0] > arr[mid]){
            ans = arr[mid];
            end = mid - 1;

        }
        
    }
    return ans;
}
int main(){
    int arr[1000];
    int n ;
    cout<<"Enter the Size of Array:";
    cin>>n;
    for(int i =0;i<n ;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<"\nRotated Array:";
    for(int j = 0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    
    cout<<endl<<min_element_in_rotated_array(arr,n);


    return 0;
}