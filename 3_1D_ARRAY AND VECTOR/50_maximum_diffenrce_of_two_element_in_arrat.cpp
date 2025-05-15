#include<iostream>
using namespace std;
int max_difference(int arr[] , int n){
    
    int suffix = arr[n-1];
    int ans = INT16_MIN ;
    for(int i = n-2 ;i>=0 ;i--){
        ans = max(ans,suffix - arr[i]);
        suffix = max(suffix,arr[i]);

    }
    return ans;
}
int main(){
    int arr[1000];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i = 0;i< n ;i++){
        cout<<"Enter the "<<i<<" element of Array:";
        cin>>arr[i];

    }
    cout<<"MAX Difference:"<<max_difference(arr,n);

    return 0;
}