#include<iostream>
using namespace std;
int shipping_weight(int arr[] , int size , int days){
    int max = INT16_MIN;
    int sum = 0;
    for(int i = 0;i<size ;i++){
        sum = sum + arr[i];
        if(max <arr[i]){
            max = arr[i];
        }
    }
    int start = max; 
    int end = sum ;
    int mid , ans ;
    while(start<=end){
        mid = start + (end-start)/2;
        int weight = 0;
        int day_count  = 1;
        for(int i = 0;i<size ;i++){
            weight +=arr[i];
            if(weight > mid){
                day_count++;
                weight = arr[i];
            }
        }
        if(day_count<= days){
            ans = mid;
            end = mid -1;

        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}
int main(){
   int arr[1000];
    int n ;
    cout<<"Enter the number of block:";
    cin>>n;
    cout<<"\nNow, Enter the weight of block:-\n";
    for(int  i  = 0;i<n  ;i++){
        cout<<"Enter the weight "<<i<<" block:";
        cin>>arr[i];
    }
    int days ;
    cout<<"Enter the Number of days in which we want to shipped :";
    cin>>days;
    cout<<"\n:-\n";
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";

    }
    cout<<"\nMinimum number of weight Required : "<<shipping_weight(arr,n ,days);
    

    return 0;
}