#include<iostream>
using namespace std;
int divide_array_with_equalsum(int arr[] , int n){
    for(int i = 0;i<n-1 ;i++){
        int sum1 = 0;
        int sum2 = 0;
        for(int j = 0 ;j<=i ; j++){
            sum1+=arr[j];

        }
        for(int j = i+1 ;j< n;j++){
            sum2 += arr[j];
        }
        if(sum1 == sum2){
            return 1;
        }

    }
    return 0;
}
int main(){
    int arr[1000];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i = 0;i<n ;i++){
        cout<<"Enter the "<<i<<" element of Array:";
        cin>>arr[i];
    }
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nSUB Array equal sum Possible: \n"<<divide_array_with_equalsum(arr,n);



    return 0;
}