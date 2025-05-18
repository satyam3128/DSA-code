#include<iostream>
using namespace std;
bool find4Numbers(int A[], int n, int X) {
     for(int i = 0;i<n-1 ;i++){  // Number of rounds 
        int index = i;
        for(int j =i+1 ;j<n ;j++){
            if(A[j] < A[index]){
                index = j;
            }
        }
        swap(A[i],A[index]);

    }
    for(int i = 0;i<n-3 ;i++){
        int target = X - A[i];
        for(int j = i+1;j<n-2 ;j++){
            int ans = target - A[j];
            int start = j+1;
            int end = n-1;
            while(start<end){
                if(A[start] + A[end] == ans) return 1;
                else if(A[start] + A[end] > ans) end--;
                else start++;
            }
        }
    
    }
    return 0;
}
int main(){
    int v[1000];
    int n ;
    cout<<"Enter the size of Array:";
    cin>>n;
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
    bool flag = find4Numbers(v,n,target);
    
    if(flag == 0){
        cout<<"NO,Target sum is not found in the given array";
    }
    else{
        cout<<"YES,Target sum is found in the given array";
    }

    
    

    return 0 ;
}