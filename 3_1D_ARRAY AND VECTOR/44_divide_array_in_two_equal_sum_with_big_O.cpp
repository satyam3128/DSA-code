#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool divide(vector<int>arr){
    int n = arr.size();
    int total_sum =0;
    int prefix = 0;
    for(int i = 0;i<n;i++){
        total_sum +=arr[i];
    }
    for(int j = 0 ;j< n  ;j++){
        prefix += arr[j];
        if(total_sum  == 2*prefix){
            return 1;
        }

    }
    return 0;  
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
    cout<<divide(v);




    return 0;
}