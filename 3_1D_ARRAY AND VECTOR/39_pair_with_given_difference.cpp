#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
vector<int>pair_difference(vector<int>&arr ,  int target){
    vector<int>v;
    int n = arr.size();
    sort(arr.begin() , arr.end());
    for(int i = 0;i<n-1 ;i++){
        int x = target + arr[i];
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
        return v;
    
}
int main(){
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    vector<int>v(n);
    for(int i =0;i< n ;i++){
        int num;
        cout<<"Enter "<<i<<" element of Array:";
        cin>>num;
        v.push_back(num);
    }
    int target;
    cout<<"\nEnter the Target:-\n";
    cin>>target;
    vector<int>v2 = pair_difference(v,target);
    cout<<"TWO Difference:";
    if(v2.empty()){
        cout<<"No any Pair";
    }
    else{
        for(size_t i = 0;i<v2.size() ;i++){
            cout<<v2[i]<<" ";
        }

    }


    return 0;
}