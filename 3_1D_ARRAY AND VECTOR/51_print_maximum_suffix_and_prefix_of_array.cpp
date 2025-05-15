#include <iostream>
using namespace std;
void MAX_print_suffix(int arr[] , int n){
    int suffix_array[n];
    suffix_array[n-1] = arr[n-1];
    for(int i = n-2 ;i>= 0 ;i--){
        suffix_array[i] = max(suffix_array[i+1] , arr[i]);
    }
    for(int i = 0;i< n ;i++){
        cout<<suffix_array[i]<<" ";
    }
}
void MAX_print_prefix(int arr[] , int n){
    int prefix_array[n];
    prefix_array[0] = arr[0];
    for(int i = 1 ;i<n ;i++){
        prefix_array[i] = max(prefix_array[i-1] , arr[i]);
    }
    for(int i = 0;i< n ;i++){
        cout<<prefix_array[i]<<" ";
    }
}
int main(){
    int arr[100];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i = 0;i< n ;i++){
        cout<<"Enter the "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<"\nArray:-\n";
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nMAX SUFFIX ARRAY MAINTAIN:\n";
    MAX_print_suffix(arr,n);
    cout<<"\nMAX PREFIX ARRAY MAINTAIN:\n";
    MAX_print_prefix(arr,n);
    return 0;
}