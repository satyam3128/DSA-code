#include<iostream>
#include<vector>
using namespace std;
int book_allocation(vector<int>&arr,int n , int m){
    if(m>n) return -1;
    int max = 0;
    int sum = 0;
    for(int i = 0 ;i<n ;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        sum = sum + arr[i];
    }
    int start = max ;
    int end = sum;
    int ans = -1;
    while(start<=end){
        int mid = start + (end - start)/2;
        int page = 0;
        int count = 1;
        for(int i = 0 ;i<n ;i++){
            page = page+arr[i];
            if(page>mid){
                count++;
                page = arr[i];
            }
        }
        if(count<=m){
            ans = mid;
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}
int main(){
    int n,m;
    cout<<"Enter the number of Book:";
    cin>>n;

    vector<int>arr(n);
    cout<<"\nEnter the number of Pages in Book:\n";
    for(int i = 0;i< n;i++){
        cout<<"Enter the number of Pages in "<<i<<" book:";
        cin>>arr[i];
    }
    cout<<"\nEnter the Number of Student in Which We Want to Distribute:";
    cin>>m;

    cout<<book_allocation(arr,n,m);


    return 0;
}