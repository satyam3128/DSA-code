#include<iostream>
using namespace std;
int max_sum_sub_array(int arr[] , int n){
    int max = INT16_MIN ; 
    for(int i = 0;i< n; i++){
        int prefix = 0;
        for(int j = i;j<n ;j++){
            prefix +=  arr[j];
            if(max < prefix){
                max = prefix;
            }
        }
    }
    return max;
}
int main(){
    int arr[100];
    int n;
    cout<<"Enter the Size of Array:";
    cin>>n;
    for(int i = 0;i< n;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>arr[i];

    }
    cout<<"\nMaximum Sum of Sub Array:"<<max_sum_sub_array(arr,n);

    return 0;
}