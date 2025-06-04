#include <iostream>
using namespace std;
int main(){
    int arr[100];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<"Arr[]:";
    for(int i = 0 ;i< n ;i++){
        cout<<arr[i]<<" ";
    }
    int total_sum = 0;
    int left = 0;
    for(int i = 0;i< n ;i++){
        total_sum += arr[i];
    }
    for(int i = 0;i<n ;i++){
        int right = total_sum - left - arr[i];
        if(right == left){
            cout<<"\nEqullibrium index:"<<i;
            return 0;
        }
        left +=arr[i];
    }
    cout<<"\nNot any Equillibrium Index Found";

    return 0;
}