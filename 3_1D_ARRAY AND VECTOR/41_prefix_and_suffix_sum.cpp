#include<iostream>
#include<vector>
using namespace std;
vector<int>prefix(int arr[] , int n){
    vector<int>v(n);
    v[0] = arr[0];
    for(int i  = 1;i<n ;i++){
        v[i] = v[i-1] + arr[i];
    }
    return v;
}
vector<int>suffix(int arr[] , int n){
    vector<int>v(n);
    v[n-1] = arr[n-1];
    for(int i = n-2 ;i>=0 ;i--){
        v[i] = v[i+1]+arr[i];
    }
    return v;
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<"\nArray[] = ";
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    vector<int>prefix_array = prefix(arr, n);
    cout<<"\nPrefix Array[] =";
    for(int i = 0 ;i< n;i++){
       cout<< prefix_array[i]<<" ";
    }
    vector<int>suffix_array = suffix(arr, n);
    cout<<"\nSuffix Array[] =";
    for(int i = 0 ;i< n;i++){
       cout<< suffix_array[i]<<" ";
    }


    return 0;
}