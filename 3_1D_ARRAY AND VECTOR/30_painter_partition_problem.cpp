#include<iostream>
#include<limits.h>
using namespace std;
int partition_problem(int arr[] , int size , int m){
    if(size < m){
        return -1;
    }
    int max = INT16_MIN ;
    int sum = 0;
    for(int i = 0;i<size ;i++){
        sum  = sum + arr[i];
        if(max >arr[i]){
            max = arr[i];
        }
    }
    int start = 0;
    int end = sum;
    int mid;
    int ans ;
    while(start<=end){
        mid = start + (end -start)/2;
        int painter = 1; 
        int time = 0;
        for(int i = 0;i<size  ;i++){
            time = time + arr[i];
            if(time> mid){
                painter++;
                time = arr[i];
            }
        } 
        if(painter <= m){
            ans = mid ;
            end  = mid -1 ;
        }
        else{
            start  = mid  +1;
        }
   }
   return ans;

}
int main(){
    int arr[1000];
    int n ;
    cout<<"Enter the number  of walls:";
    cin>>n;
    cout<<"\nNow, Enter the number of length of Walls:-\n";
    for(int  i  = 0;i<n  ;i++){
        cout<<"Enter the length of "<<i<<" walls:";
        cin>>arr[i];
    }
    int painter ;
    cout<<"Enter the Number of painter In which We want to Distribute :";
    cin>>painter;
    cout<<"\nwall lenght Display:-\n";
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";

    }
    cout<<"\nMinimum number of time reqired : "<<partition_problem(arr,n ,painter);
    
    



    return 0;
}