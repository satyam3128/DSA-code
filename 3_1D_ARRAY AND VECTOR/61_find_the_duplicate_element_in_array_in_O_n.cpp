#include <iostream>
#include <vector>
using namespace std;
vector<int> duplicate(vector<int>arr){
    int n = arr.size();
    vector<int>freq(n+1 ,0);
    // counting the frequency of element
    for(int i  = 0;i<n ;i++){
        freq[arr[i]]++;
    }

    vector<int>ans;
    for(int i =0 ;i<freq.size() ;i++){
        if(freq[i]>1){
            ans.push_back(i);
        }
    }
    return ans;

}


int main(){
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n ;i++){
        cout<<"Enter the "<<i<<" element of Array:";
        cin>>v[i];
    }
    cout<<"\nARRAY[]: ";
    for(int i = 0;i<n ;i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    vector<int>ans = duplicate(v);
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    

    return 0;
}