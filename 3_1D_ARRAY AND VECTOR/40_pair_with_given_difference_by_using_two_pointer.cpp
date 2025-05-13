#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>pair_difference(vector<int>&arr , int target){
    int n = arr.size();
    sort(arr.begin() , arr.end());
    int start = 0;
    int end = 1;
    vector<int>v;
    // if target is negative 
    if(target<0){
        target = target * -1;
    }
    while(end < n){

        if(arr[end] - arr[start] == target){
            v.push_back(arr[start]);
            v.push_back(arr[end]);
            break;
        }
        else if(arr[end] - arr[start] < target){
            end++;
        }
        else{
            start++;
        }
        // if start and end point same index 
        if(start == end) start++;

    }
    return v;
}
int main(){
    vector<int>v;
    int n ;
    cout<<"Enter the size of array:";
    cin>>n;
    v.resize(n);
    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>v[i];
    }
    int target;
    cout<<"Enter the Target difference:";
    cin>>target;
    vector<int>ans = pair_difference(v,target);
    int size = ans.size();
    for(int i = 0;i < size ;i++){
       cout<< ans[i] <<" ";
    }
    
    

    
    return 0;
}