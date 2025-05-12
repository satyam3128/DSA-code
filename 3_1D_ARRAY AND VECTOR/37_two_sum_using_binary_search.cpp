#include<iostream>
#include<vector>
using namespace std;
void TWO_SUM(int arr[] , int n , int target){
    vector<int>v;
    for(int i = 0;i<n-1 ;i++){
        int x = target - arr[i];
        int start = i+1;
        int end = n-1 ;
        int mid ;
        while(start<= end){
            mid =  (end+ start)/2;
            if(arr[mid] == x){
                v.push_back(arr[i]);
                v.push_back(arr[mid]);
                break;
            }
            else if(arr[mid] > x){
                end = mid - 1;
            
                
            }
            else{
                start = mid +1;
            }
        }
    }
    for(int i  = 0;i< v.size() ;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    int arr[100];
    int n ;
    cout<<"Enter the size of Array:";
    cin >>n;
    for(int i = 0;i< n ;i++){
        cout<<"enter "<<i<<" element of Array:";
        cin>>arr[i];
    }
    for(int i = 0;i< n;i++)
    {
        cout<<arr[i]<<" ";


    }
    cout<<endl;
    int target;
    cout<<"Enter the target sum:";
    cin>>target;
    TWO_SUM(arr,n,target);

    return 0;
}