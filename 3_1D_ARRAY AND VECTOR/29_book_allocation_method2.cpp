#include<iostream>
#include<limits.h>
using namespace std;
int allocation(int arr[] , int size , int m){
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
        int student_count = 1; 
        int page = 0;
        for(int i = 0;i<size  ;i++){
            page = page + arr[i];
            if(page> mid){
                student_count++;
                page = arr[i];
            }
        } 
        if(student_count <= m){
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
    cout<<"Enter the number of Book:";
    cin>>n;
    cout<<"\nNow, Enter the number pages of Book:-\n";
    for(int  i  = 0;i<n  ;i++){
        cout<<"Enter the page of "<<i<<" Book:";
        cin>>arr[i];
    }
    int student ;
    cout<<"Enter the Number of Student In which We want to Distribute book:";
    cin>>student;
    cout<<"\nBooks Page number Display:-\n";
    for(int i = 0;i<n ;i++){
        cout<<arr[i]<<" ";

    }
    cout<<"\nMinimum number of Pages who have maximum number of Books : "<<allocation(arr,n ,student);
    
    



    return 0;
}