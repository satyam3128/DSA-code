#include<iostream>
#include<vector>
using namespace std;
void TWO_SUM(int arr[] , int n , int target){
    vector<int>v;
    int start  = 0;
    int end = n-1;
    while(start<end){
        if(arr[start] + arr[end] == target){
            v.push_back(arr[start]);
            v.push_back(arr[end]);
            break;
        }
        else if(arr[start] + arr[end] < target){
            start++;
        }
        else{
            end--;
        }
    }
    for(int i = 0;i!=v.size() ;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int arr[1000];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    cout<<"\nEnter the Sorted Array:\n";
    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>arr[i];
    }
    cout<<"\nARRAY[] = ";
    for(int i = 0;i< n;i++){
        cout<<arr[i]<<" ";
    }
    int target;
    cout<<"Enter the target:";
    cin>>target;
    cout<<"\nTWO SUM :\n";
    TWO_SUM(arr,n ,target );


    return 0;
}