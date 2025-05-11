#include<iostream>
#include<vector>
using namespace std;
void leader(int arr[] , int size){
    vector<int>v;
    int max_number = arr[size-1];
    v.push_back(max_number);
    for(int i = size-2; i>=0;i--){
        if(arr[i] >= max_number){
            max_number = arr[i];
            v.push_back(max_number);
        }
    }
    int i = 0;
    int j = v.size()-1;
    while(i<=j){
        swap(v[i],v[j]);
        i++;
        j--;
    }
    for(int i = 0;i<v.size() ;i++){
        cout<<v[i]<<" ";
    }


}
int main(){
    int arr[1000];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
    for(int i = 0;i< n ;i++){
        cout<<"Enter "<<i <<" element of Array:";
        cin>>arr[i];
    }

    cout<<endl;
    for(int i = 0 ;i<n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nLeader Element in Array:\n";
    leader(arr,n);
    return 0;
}