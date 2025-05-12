#include<iostream>
using namespace std;
void segeregate_zero_one(int arr[] , int n){
    int start = 0;
    int end = n-1;
    while(start<end){
        if(arr[start] == 0){
            start++;

        }
        else{
            if(arr[end] == 1){
                end --;
            }
            else{
                swap(arr[start] , arr[end]);
                start++;
                end--;
            }
        }
    }
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the Size of Array:";
    cin>>n;
    for(int i = 0;i< n;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<"arr[] = ";
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    segeregate_zero_one(arr,n);
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}