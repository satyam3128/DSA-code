#include<iostream>
using namespace std;
int max_difference(int *arr , int n ){
    int ans = INT16_MIN;
    for(int i  = 0;i< n ;i++){
        
        for(int j = i+1 ;j<n;j++){
            int diff = arr[j] - arr[i];
            ans = max(ans, diff);
        }
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