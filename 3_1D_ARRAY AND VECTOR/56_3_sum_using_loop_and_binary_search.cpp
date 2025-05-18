#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool Three_SUM(vector<int>arr,int target){
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for(int i = 0;i<n-2 ;i++){
        for(int j = i+1 ;i<n;i++){
            int find = target - arr[i] - arr[j];
            int start = j+1; 
            int end = n-1;
            while(start<= end){
              int mid = start + (end-start)/2;
                if(arr[mid] == find){
                    return 1;
                }
                else if(arr[mid] > find){
                    end--;
                }
                else{
                    start++;
                }
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
        cout<<"Target sum is not found in the given array";
    }
    else{
        cout<<"Target sum is found in the given array";
    }

    
    

    return 0 ;
}