#include<iostream>
#include <vector>
using namespace std;
int max_sum_in_of_sub_array(vector<int>arr){
    int n = arr.size();
    vector<int>v;
    for(int i = 0;i<n ;i++){
        for(int j = 0;j<n-i ;j++ ){
            int sum = 0;
            for(int k = j ;k<=i+j ;k++){
                sum += arr[k];
                v.push_back(sum);
            }
        }
    }
    int max = INT32_MIN;
    int x = v.size();
    for(int i = 0 ;i<x ;i++ ){
        if(v[i] > max){
            max = v[i];
        }
    }
    return max;
}
int main(){
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n ;i++){
        cout<<"Enter "<<i<<" element of Array:";
        cin>>v[i];
    }
    cout<<max_sum_in_of_sub_array(v);

    
    return 0;
}