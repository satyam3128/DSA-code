#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool Three_SUM(vector<int>arr,int target){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for(int i = 0;i<n-2 ;i++){
        int find = target - arr[i];
            int start = i+1; 
            int end = n-1;
            while(start<= end){
              if(arr[start] + arr[end] == find){
                return 1;
              }
             else if(arr[start] + arr[end] > find){
                end --;
              }
              else{
                start++;
              }
            
        }
    }
    return 0;

}
int main(){
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i< n ;i++){
        cout<<"Enter the "<<i<<" element of Array:";
        cin>>v[i];
    }
    cout<<"Array[] = ";
    for(int i = 0;i< n ;i++){
        cout<<v[i]<<" ";
    }
    int target ;
    cout<<"\nEnter the target Sum :";
    cin>>target;
    bool flag = Three_SUM(v,target);
    
    if(flag == 0){
        cout<<"NO,Target sum is not found in the given array";
    }
    else{
        cout<<"YES,Target sum is found in the given array";
    }

    
    

    return 0 ;
}